class Solution {
public:
    string reversePrefix(string word, char ch) {

        for (int i = 0; i <word.size(); i++) {

            if (word[i]==ch) {

                int ed = i;
                int st = 0;

                while (st<ed) {
                    swap (word[st],word[ed]);
                    st++;
                    ed--;
                }

                break;
            }
        }

        return word;
        
    }
};