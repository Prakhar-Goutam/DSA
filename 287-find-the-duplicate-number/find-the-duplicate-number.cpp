class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int duplicate = -1;

        for (int i = 0; i <nums.size(); i++) {
            int idx = abs(nums[i]) - 1;

        if (nums[idx] < 0) {
            duplicate = abs(nums[i]);
            break;
        }

        else {
            nums[idx] = -nums[idx];
        }
        } 

       return duplicate; 
    }
};