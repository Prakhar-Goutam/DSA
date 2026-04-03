class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        int n = nums.size();
        vector<int> arr;

        sort (nums.begin(),nums.end());

        for (int i = 1; i < n; i= i+2) {

            swap(nums[i], nums[i-1]);
        }

        arr = nums;
       
        return arr;
    }
}; 