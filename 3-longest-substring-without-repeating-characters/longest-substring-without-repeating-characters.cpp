class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int maxL = 0;

        for (int i = 0; i<n; i++) {

            int freq[256] = {0};

            for (int j = i; j<n ; j++) {

                if (freq[s[j]] == 1) break;
                maxL = max (maxL , j-i+1);

                freq[s[j]] = 1;
            }
        }

        return maxL;
        
    }
};