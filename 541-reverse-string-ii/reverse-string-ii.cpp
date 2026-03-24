class Solution {
public:
    string reverseStr(string s, int k) {

        int n = s.length();

        for (int i = 0; i < n ; i = i+ 2*k) {

            int st = i;
            int ed = min (i+k-1, n-1);

            while (st<ed) {
                swap (s[st], s[ed]);
                st++;
                ed--;
            }

        }

     
     return s;
    }
};