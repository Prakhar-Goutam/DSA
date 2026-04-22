class Solution {
public:
    int beautySum(string s) {

        int n = s.size();
        int ans = 0;

        for (int i =0 ; i<n ;i++) {

            int count[26] = {0};

            for (int j =i ; j< n; j++) {

                
                count[s[j]-'a']++;

                int Maxl = INT_MIN;
                int Minl = INT_MAX;

                for (int y = 0; y<26; y++) {
                    if (count[y] >0) {
                        Maxl = max(Maxl,count[y]);
                        Minl = min(Minl,count[y]);
                    }
                }

                int beauty = Maxl - Minl;
                ans += beauty;
            }
        }

        return ans;
        
    }
};