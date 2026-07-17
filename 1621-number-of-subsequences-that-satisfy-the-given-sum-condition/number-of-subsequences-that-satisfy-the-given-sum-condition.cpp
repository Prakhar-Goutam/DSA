class Solution {
public:

    int numSubseq(vector<int>& nums, int target) {

        int n = nums.size();

        sort (nums.begin() , nums.end());
        int MOD = 1e9 + 7;

        vector<int> power(n);
        power [0] = 1;

        for (int i = 1; i<n; i++) {
            power[i] = (power[i-1] * 2) % MOD;
        }

      
    
        int l = 0;
        int r = n-1;
        long long ans = 0;

        while (l<=r) {

            if (nums[l] + nums[r] <= target) {

                ans = (ans % MOD + power[r-l]) % MOD;
                l++;
            }

            else {
                r--;
            }
        }

        return ans;


        
    }
};