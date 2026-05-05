class Solution {
public:

    int subarrayWithAtMostK(vector<int> &nums, int k) {

        int n = nums.size();
        unordered_map<int,int>mpp;
        int l = 0;
        int count = 0;

        for (int r= 0; r<n; r++) {

            mpp[nums[r]]++;

            while (mpp.size()>k) {
                mpp[nums[l]]--;

                if (mpp[nums[l]]==0) {
                    mpp.erase(nums[l]);
                }
                l++;

            }
             count += r-l+1;
        }

        return count;

    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        return subarrayWithAtMostK(nums,k) - subarrayWithAtMostK(nums, k-1);


        
    }
};