class Solution {
public:
    string removeOuterParentheses(string s) {

        vector<char> ans;
        int count = -1;

        for (int i = 0; i < s.size(); i++) {

            if (s[i]== '(') {

                if(count!=-1) {
                    ans.push_back(s[i]);   
                }
                count++;
            }

            else {

                if(count!=0) {
                    ans.push_back(s[i]);
                }

                count--;
            }
        }

        string s1(ans.begin(), ans.end());

        return s1;
        
    }
};