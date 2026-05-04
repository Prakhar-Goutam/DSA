class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();
        vector<int> freq(26,0);    ////// char ----> freq
        int l = 0;
        int r = 0;
        int maxFreq = 0;
        int maxL = 0;

        while (r < n) {

            freq[s[r] - 'A']++;
            maxFreq = max (maxFreq, freq[s[r] - 'A']);

            while ( (r-l+1)  - maxFreq > k) {     ///// NOT A VALID WINDOW -----> TRIM IT DOWN
            freq[s[l]- 'A'] --; 
            l++;
            }
        
            maxL = max (maxL , r-l+1);

            r++;
        }

        return maxL;     
    }
};