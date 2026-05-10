class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int m = s.size();
        int n = p.size();

        if (n > m) return ans;

        vector<int> freqS(26,0);
        vector<int> freqP(26,0);

        for (int i = 0; i<n ; i++) {
            freqP[p[i]-'a']++;
        }   

        //// TAKE FREQ OF 1ST WINDOW IN S ////
        for (int i = 0; i<n; i++) {
            freqS[s[i]-'a']++;
        }    

        //// CHECK /////
        if (freqP == freqS) {
            ans.push_back(0);
        } 

        //// CHECK COMPLETE STRING ////
        for (int i = n ; i<m; i++) {

            //// add character ////
            freqS[s[i]-'a']++;

            //// remove ch ////
            freqS[s[i-n] - 'a'] --;

            if (freqS== freqP) {
                ans.push_back(i-n+1);
            }
        }

        return ans;

       
    }
};