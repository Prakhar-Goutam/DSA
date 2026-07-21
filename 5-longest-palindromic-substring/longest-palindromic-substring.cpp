class Solution {
public:

    bool isPalindrome (string & s) {

        int i = 0;
        int j = s.size() - 1;

        while (i<=j) {

            if (s[i] != s[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {

        int n = s.length();
        string w = "";

        for (int i = 0; i<n ; i++) {

            string t = "";

            for (int j = i; j<n; j++) {

                t += s[j];

                if (isPalindrome (t)) {

                    if (t.size() > w.size()) {
                        w = t;
                    }

                }


            }
        }

        return w;
        
    }
};