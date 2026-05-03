class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m = s1.size();
        int n = s2.size();

        if (m>n)return false;

        vector<int>freq1 (26,0);
        vector<int>freq2 (26,0);

        for (int i =0; i<m; i++) {
            freq1[s1[i]-'a']++;  
        }

        int r = 0;
        int l = 0;

        while(r<n) {

            freq2[s2[r]-'a']++;

            while(r-l+1>m) {
                freq2[s2[l]-'a']--;
                l++;
            }

            if (freq1 == freq2) {
                return true;
            }

            r++;
        }

        return false;
        
    }
};