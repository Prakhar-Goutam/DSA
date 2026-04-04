class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> hash (256,-1);
        int l = 0;
        int r = 0;
        int Maxl = 0;

        while (r<n) {

            if (hash[s[r]] != -1) {

                if (hash[s[r]] >=l) {
                    l = hash[s[r]] + 1;
                }
            }
            int Currlen = r-l+1;
            Maxl = max (Maxl,Currlen);
            hash[s[r]] = r;
            r++;  

       }

       return Maxl;
    }
};