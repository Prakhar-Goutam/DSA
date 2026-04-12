class Solution {
public:
    bool backspaceCompare(string s, string t) {

        vector<char> ans;

        for (int i = 0; i <s.size(); i++) {

            if (s[i]=='#') {
                if (!ans.empty()) {
                ans.pop_back();
                }
            }
            else{
                ans.push_back(s[i]);
            }
        }

        string s1 = "";

        for (int i = 0; i <ans.size(); i++) {

            s1 += ans[i];
        }

        ans.clear();

        for (int i = 0; i <t.size(); i++) {

           if (t[i]=='#') {
                if (!ans.empty()) {
                ans.pop_back();
                }

           }

            else{
                ans.push_back(t[i]);
            }
        }

        string t2 = "";
        for (int i = 0; i <ans.size(); i++) {
            t2 += ans[i];
        }

        if (s1==t2) {
            return true;
        }
        else {
            return false;
        }

        
        
    }
};