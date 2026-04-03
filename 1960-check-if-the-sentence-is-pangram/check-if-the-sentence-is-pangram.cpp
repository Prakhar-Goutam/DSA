class Solution {
public:
    bool checkIfPangram(string sentence) {

        int n = sentence.length();
        int count[26] = {0} ;

        for (int i = 0; i<n ; i++) {

            count[sentence[i]-'a']++;
        }

        for (int i = 0; i <26 ; i++) {

            if (count[i]<1) return false;
        }
         return true;  
    }
};