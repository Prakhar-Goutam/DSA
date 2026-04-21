class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        int n = words.size();

        for (int i = 0; i<n; i++) {

            int st = 0;
            int ed = words[i].size() - 1;
            bool isPal = true;

            while(st<ed) {

                if(words[i][st]!=words[i][ed]) {
                   isPal = false;
                   break;
                }

                st++;
                ed--;  
            }

             if (isPal==true) return words[i];    
        }

        return "";
        
    }
};