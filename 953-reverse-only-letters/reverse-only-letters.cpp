class Solution {
public:
    string reverseOnlyLetters(string s) {

        int st = 0;
        int ed = s.size() - 1;

        while (st < ed) {

            if (!isalpha(s[st])) {
                st++;
                continue;
            }

            if (!isalpha(s[ed])) {
                ed--;
                continue;
            }

            swap (s[st], s[ed]);
            st++;
            ed--;
        }

        return s;
        
    }
};