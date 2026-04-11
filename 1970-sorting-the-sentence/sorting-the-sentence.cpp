class Solution {
public:
    string sortSentence(string s) {

        vector<string> ans (10);
        string temp = "";
        int i = 0;

        while (i < s.size()) {

            if (s[i] == ' '){

                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
              
            }

            else {

                temp += s[i];
            }
            i++;
        }

         int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
              
                string s1 = "";

                for (int i = 1; i <= 9; i++) {
                  if (ans[i] != "") {
                     s1 += ans[i];
                       s1 += ' ';
                    }
                }

                if (!s1.empty()) s1.pop_back();

                return s1;

        
    }
};