class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mpp;
        int n = nums.size();

        for (int r = 0; r<n ; r++) {
            int needed = target - nums[r];

            if (mpp.find(needed) != mpp.end()) {
                return {mpp[needed] , r};
            } 

            mpp[nums[r]] = r;        
        } 

        return {}; 
    }
};