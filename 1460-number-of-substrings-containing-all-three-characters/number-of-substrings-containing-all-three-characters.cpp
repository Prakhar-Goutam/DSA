class Solution {
public:
    int numberOfSubstrings(string s) {

        int n = s.size();
        vector<int> freq(3,-1);    //// INITIALISING WITH -1 IS VERY IMP
        int count = 0;

        for (int r=0; r<n; r++) {

            freq[s[r]-'a'] = r;

            if (freq[0] != -1 && freq[1] != -1 && freq[2] != -1) {
                count = count + (1 + min(freq[0], min(freq[1], freq[2])));
            }
        }
        return count;    
    }
};