class Solution {
public:
    int strStr(string s, string t) {

        int m = s.size();
        int n = t.size();

        if (n>m) return -1;

        for (int i = 0; i<= m-n; i++) {

            int j = 0;

            while (j<n && s[i+j] == t[j]) {
                j++;
            }

            if (j==n) return i;   
        }

        return -1;
        
    }
};