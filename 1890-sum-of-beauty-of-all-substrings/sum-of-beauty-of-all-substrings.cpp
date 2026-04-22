class Solution {
public:
    int beautySum(string s) {

        int n = s.size();
        int ans = 0;

        for (int i =0 ; i<n ;i++) {

            string s1 = "";

            for (int j =i ; j< n; j++) {

                s1+=s[j];
                int count[26] = {0};

                for(int z = 0; z<s1.size(); z++) {
                    count[s1[z] - 'a']++;
                }

                int Maxl = INT_MIN;
                int Minl = INT_MAX;

                for (int y = 0; y<26; y++) {
                    if (count[y] != 0) {
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