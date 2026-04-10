class Solution {
public:
    int lengthOfLastWord(string s) {

        int ed = s.length() - 1;
        int count = 0;

        while (s[ed] == ' ') {
            ed--;
        }


        for (int i = ed ; i>=0 ;i--) {

            if (s[i]==' ') break;
            count++;
              
        }

        return count;
        
    }
};