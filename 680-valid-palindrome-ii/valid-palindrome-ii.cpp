class Solution {
public:

    bool Movepointer (string & s,int l ,int r) {

        while (l < r) {

            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }


    bool validPalindrome(string s) {

        int st = 0;
        int ed = s.size() -  1;

        while (st < ed) {

            if (s[st] != s[ed]) {

                return Movepointer(s, st+1, ed) || Movepointer(s, st, ed-1) ;
            } 
            st++;
            ed--;
        }

        return true;
        
    }
};