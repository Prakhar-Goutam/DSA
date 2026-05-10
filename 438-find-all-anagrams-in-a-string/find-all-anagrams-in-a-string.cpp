class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int m = s.size();
        int n = p.size();

        vector<int> freqP(26,0);

        for (int i = 0; i<n; i++) {
            freqP[p[i] - 'a']++;
        } 

        for (int i = 0; i<=m-n ; i++) {

            vector<int> freqS(26,0);

            for (int j = i; j<i+n ; j++) {
                freqS[s[j]-'a']++;    
            }

             if (freqP == freqS) {
                    ans.push_back(i);
            }

        }
        return ans;
        
    }
};