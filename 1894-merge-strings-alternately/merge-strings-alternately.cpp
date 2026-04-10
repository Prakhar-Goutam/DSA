class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string s = "";
        int i = 0;
        int j = 0;

        while(i < word1.size() && j < word2.size()) {

            s = s + word1[i];
            i++;
            s = s + word2[j];
            j++;
        }

        while (i < word1.size()) {
            s = s + word1[i];
            i++;
        }

        while (j < word2.size()) {
            s = s + word2[j];
            j++;
        }

        return s;
        
    }
};