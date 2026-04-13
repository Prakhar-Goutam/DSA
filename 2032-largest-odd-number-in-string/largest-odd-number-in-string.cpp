class Solution {
public:
    string largestOddNumber(string num) {

        int ed = num.size()-1;

        for (int i = ed ; i>=0 ; i--) {

            if (num[i] % 2 == 1) {
                return num.substr(0, i+1);
            }
        }

        return "";
        
    }
};