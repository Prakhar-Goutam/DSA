class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m = s1.size();
        int n = s2.size();

        if (m>n) return false;

        vector<int> freq(26,0);

        for (char ch : s1) {
            freq[ch - 'a']++;
        }

        int l = 0;
        int count = m;

        for (int r =0; r<n; r++) {

            if (freq[s2[r]-'a'] >0) {
                count--;
            }

            freq[s2[r]-'a']--;

            if (r-l+1 >m) {
                if (freq[s2[l]-'a'] >= 0) {
                    count++;
                }
                freq[s2[l]-'a']++;
                l++;
            }

            if (count==0)return true;
        }

        return false;
        
    }
};