class Solution {
public:
    void sortColors(vector<int>& nums) {

        for (int i = 1; i<nums.size();i++){
            int cur = nums[i];
            int prev = i-1;
            while(prev>=0 && nums[prev]>cur){
                swap(nums[prev],nums[prev+1]);
                prev--;
            }
            nums[prev+1] = cur;
        }

        
    }
};