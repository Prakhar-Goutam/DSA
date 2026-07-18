class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {

        int n = fruits.size();

        vector<int> pos(n), prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pos[i] = fruits[i][0];
            prefix[i + 1] = prefix[i] + fruits[i][1];
        }

        int ans = 0;

        // Go left first, then right
        for (int x = 0; x <= k / 2; x++) {

            int leftPos = startPos - x;
            int rightPos = startPos + (k - 2 * x);

            auto l = lower_bound(pos.begin(), pos.end(), leftPos) - pos.begin();
            auto r = upper_bound(pos.begin(), pos.end(), rightPos) - pos.begin();

            ans = max(ans, prefix[r] - prefix[l]);
        }

        // Go right first, then left
        for (int x = 0; x <= k / 2; x++) {

            int rightPos = startPos + x;
            int leftPos = startPos - (k - 2 * x);

            auto l = lower_bound(pos.begin(), pos.end(), leftPos) - pos.begin();
            auto r = upper_bound(pos.begin(), pos.end(), rightPos) - pos.begin();

            ans = max(ans, prefix[r] - prefix[l]);
        }

        return ans;
    }
};