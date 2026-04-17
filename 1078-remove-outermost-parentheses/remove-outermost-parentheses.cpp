class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";
        int count = 0;

        for (int i = 0; i<s.size(); i++) {

            if(s[i]=='(') {

                if(count!=0) {

                    ans.push_back(s[i]);
                    count++;
                }
                count++;
            }

            else {

                if (count != 1){

                    ans.push_back(s[i]);
                    count--;
                }
                count--;
            }
        }

        string s1(ans.begin(), ans.end());

        return s1;
        
    }
};