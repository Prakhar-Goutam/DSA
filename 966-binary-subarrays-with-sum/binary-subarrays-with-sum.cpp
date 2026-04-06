class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        map <int,int> mpp;
        mpp[0] = 1;
        int preSum = 0;
        int count = 0;

        for (int i =0 ; i <nums.size(); i++) {

            preSum = preSum + nums[i];
            int remove = preSum - goal;
            count = count + mpp[remove];
            mpp[preSum]++;
        }

        return count;
        
    }
};