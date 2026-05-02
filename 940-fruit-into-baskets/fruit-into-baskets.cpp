class Solution {
public:
    int totalFruit(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> mpp;
        int maxL = 0;

        int l = 0;

        for (int r= 0; r<n ; r++) {

            mpp[nums[r]]++;

            if (mpp.size() > 2) {
                mpp[nums[l]]--;
                if (mpp[nums[l]]==0) {
                    mpp.erase(nums[l]);
                }
                l++;
            }

             maxL = max(maxL, r-l+1);
        }

        return maxL;
        
    }
};