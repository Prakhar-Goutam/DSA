class Solution {
public:
    string minWindow(string s, string t) {

        int m = s.size();
        int n = t.size();

        if (n>m) return "";

        vector<int> freq (128, 0);

        for (int i = 0; i<n; i++ ) {

            freq[t[i]]++;
        }

        int l = 0;
        int required = n;
        int minL = INT_MAX;
        int startIdx = -1;

        for (int r = 0; r<m ; r++) {

            if (freq[s[r]] > 0) {
                required--;
            }

            freq[s[r]]--;

            while (required == 0) {

                if (r-l+1 < minL) {

                    minL = r-l+1;
                    startIdx = l;
                }

                freq[s[l]]++;

                if (freq[s[l]] > 0) {
                    required++;
                }
                l++;
            }
             
        }

        if (startIdx == -1) {
            return "";
        }

        return s.substr(startIdx , minL);

    }
};