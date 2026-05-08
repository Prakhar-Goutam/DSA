class Solution {
public:

    int countT (string &s , int k) {

        int n = s.size();
        int l = 0;
        int count = 0;
        int maxL = 0;

        for (int r = 0; r< n; r++) {

            if (s[r]=='F') {
                count++;
            }

            while (count>k) {
                if (s[l]=='F') {
                    count--;
                }
                l++;
            }

            maxL = max(maxL , r-l+1);
        }

        return maxL;
    }

    int countF (string &s, int k) {

        int n = s.size();
        int l = 0;
        int count = 0;
        int maxL = 0;

        for (int r = 0; r< n; r++) {

            if (s[r]=='T') {
                count++;
            }

            while (count>k) {
                if (s[l]=='T') {
                    count--;
                }
                l++;
            }

            maxL = max(maxL , r-l+1);
        }

        return maxL;

    }


    int maxConsecutiveAnswers(string s, int k) {

        int T = countT(s,k);
        int F = countF(s,k);

        if (T>F) return T;
        else{
            return F;
        }

    }
};