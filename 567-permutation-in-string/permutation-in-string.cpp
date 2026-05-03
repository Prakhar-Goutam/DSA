class Solution {
public:

    bool isFreqSame(vector<int>&freq1 , vector<int>&freq2) {

        for(int i =0; i< 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }

        return true;
    }
    
    bool checkInclusion(string s1, string s2) {

        int m = s1.size();
        int n = s2.size();

        if (m>n) return false;

        vector<int> freq(26,0);

        for (int i = 0; i<m; i++) {
            freq[s1[i]-'a']++;
        }

        int windSize = m;

        for (int i = 0; i<n; i++) {

            int windIdx=0; 
            int idx = i;
            vector<int> windFreq(26,0);

            while(windIdx < windSize && idx<n) {
                windFreq[s2[idx]- 'a']++;
                idx++;
                windIdx++;
            }

            if (isFreqSame (freq, windFreq)) {
                return true;
            }
        }

        return false;
        
    }
};