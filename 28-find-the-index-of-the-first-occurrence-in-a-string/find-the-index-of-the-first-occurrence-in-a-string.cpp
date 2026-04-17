class Solution {
public:
    int strStr(string s, string t) {

        int m = s.size();
        int n =  t.size();

        for (int i =0; i <m; i++) {

            string ans = "";

            for (int j = i; j<m; j++) {

                ans+=s[j];

                if(ans==t) {
                    return i;
                    break;
                }
            }
        }

        return -1;
        
    }
};