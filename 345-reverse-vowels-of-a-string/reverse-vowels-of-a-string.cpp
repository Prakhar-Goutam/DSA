class Solution {
public:
    string reverseVowels(string s) {

        int st = 0;
        int ed = s.size()-1;

        while (st < ed) {

            while (st < ed && s[st]!='a' && s[st]!='e'&& s[st]!='i'&& s[st]!='o' &&s[st]!='u' && s[st]!='A' && s[st]!= 'E' && s[st]!='I'&& s[st]!='O'&& s[st]!='U') {
                st++;
            }

            while (st < ed && s[ed]!='a' && s[ed]!='e' && s[ed]!='i'&& s[ed]!='o' && s[ed]!='u' && s[ed]!='A' && s[ed]!='E' && s[ed]!='I' && s[ed]!='O' && s[ed]!='U') {
                ed--;
            }

                swap(s[st], s[ed]);
            


            st++;
            ed--;


        }

        return s;
        
    }
};