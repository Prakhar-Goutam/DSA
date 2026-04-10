class Solution {
public:
    string reverseWords(string s) {

        string s1 = "";

        int st = 0;
        int ed = s.size() -1;

        while (st < ed) {
            swap (s[st], s[ed]);
            st++;
            ed--;
        }

        for (int i = 0; i < s.size() ; i++) {

            if (s[i] != ' ') {
                 s1 += s[i];
                }
            else if (!s1.empty() && s1.back() != ' ') {
                 s1 += ' ';
                }
        }
        if (!s1.empty() && s1.back() == ' ') {
            s1.pop_back();
        }

        int l = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i]==' '){
                int r = i-1;
                while (l < r) {
                    swap(s1[l], s1[r]);
                    l++;
                    r--;
                }
                l = i+1;
            }
        }

        int r = s1.size()-1;
        while (l < r) {
            swap (s1[l],s1[r]);
            l++;
            r--;
        }

        return s1;

    }
};