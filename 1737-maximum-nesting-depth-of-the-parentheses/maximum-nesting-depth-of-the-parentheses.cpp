class Solution {
public:
    int maxDepth(string s) {

        int count = 0;
        int Max = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i]== '(') {
                count++;
                Max = max(Max,count);
            }

            else if(s[i]== ')'){

                count--;
            }
        }

        return Max;
        
    }
};