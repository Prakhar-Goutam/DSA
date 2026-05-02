class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n = nums.size();
        int maxCount =  0;
        int l = 0;
        long long prod = 1;

        if (k<=1)return 0;

        for (int r = 0; r<n ; r++) {   ///// first shrink then count

            prod *= nums[r];

            while (prod >= k) {
                prod = prod / nums[l];
                l++;
            }

            maxCount += r-l+1;


        }
        return maxCount;
        
    }
};