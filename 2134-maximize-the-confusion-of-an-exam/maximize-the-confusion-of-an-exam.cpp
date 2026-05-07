class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {

        int n = s.size();
        int tCount = 0;
        int fCount = 0;
        int l = 0;
        int r = 0;
        int maxFreq = 0;
        int maxL = 0;

        while (r<n) {
            if (s[r] == 'T') tCount++;
            else {
                fCount++;
            }

            maxFreq = max(maxFreq, max(tCount, fCount));

            while( (r-l+1) - maxFreq > k) {
                
                if (s[l] == 'T') tCount--;
                else fCount--;
                l++;
            }

            maxL = max (maxL , r-l+1);
            r++;
        }

        return maxL;
        
    }
};