class Solution {
public:

    int func (vector<int> & nums, int goal) {
        
        int n = nums.size();
        int l = 0;
        int r = 0;
        int sum = 0;
        int count = 0;

        while (r<n) {

            sum += nums[r];

            while (sum > goal && l<=r) {    ///// (l<=r) likhne ki jarurat nahi hai. 
                sum -= nums[l];
                l++;
            }

              // if (sum<=goal) {  ///// if not needed anymore kyoki while wali condition window shrink kr krke, sum ko less than equal to k le hi aayega.
                count += r-l+1;
           ///// }

            r++;

        }

        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {

        if (goal < 0) return 0;
        return func(nums,goal) - func (nums, goal-1);
        
    }
};