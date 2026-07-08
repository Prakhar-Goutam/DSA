class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> diff(n + 1, 0);

        int flip = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            flip ^= diff[i];

            // Effective value after active flips
            if (nums[i] == flip) {

                if (i + k > n)
                    return -1;

                ans++;

                flip ^= 1;

                diff[i + k] ^= 1;
            }
        }

        return ans;
    }
};