class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    string reverseVowels(string s) {

        int st = 0, ed = s.size() - 1;

        while (st < ed) {

            if (!isVowel(s[st])) {
                st++;
            }
            else if (!isVowel(s[ed])) {
                ed--;
            }
            else {
                swap(s[st], s[ed]);
                st++;
                ed--;
            }
        }

        return s;
    }
};