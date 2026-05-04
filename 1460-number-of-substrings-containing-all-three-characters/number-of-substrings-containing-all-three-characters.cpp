class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int n = s.length();
        int count = 0;

        for (int i = 0; i < n; i++) {

            vector<int> freq(3, 0);
            int unique = 0;

            for (int j = i; j < n; j++) {

                int idx = s[j] - 'a';

                if (freq[idx] == 0) unique++;
                freq[idx]++;

                if (unique == 3) {
                    count += (n - j);  // 🔥 optimization
                    break;
                }
            }
        }

        return count;
    }
};