class Solution {
public:
    string reverseStr(string s, int k) {

        for (int i = 0; i < s.length(); i= i+2*k) {

            int st = i;
            int ed = min(i+k-1 , (int)s.length()-1);

            while (st < ed) {

                swap (s[st],s[ed]);
                st++;
                ed--;
            }
        }

        return s;
        
    }
};