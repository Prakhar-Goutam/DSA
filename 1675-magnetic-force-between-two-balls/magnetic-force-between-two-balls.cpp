class Solution {
public:

    bool isValid (vector<int> &nums , int force , int m) {

        int ball = 1;
        int lastPo = 0;

        for (int i = 1; i<nums.size(); i++) {

            if (nums[i] - nums[lastPo] >= force) {
                ball++;
                lastPo = i;
            }

            if (ball == m) {
                return true;
            }
        }

        return false;
    }
    int maxDistance(vector<int>& nums, int m) {

        int n = nums.size();
        int ans = 0;

        sort (nums.begin() , nums.end());

        int st = 1;
        int ed = nums[n-1] - nums[0];

        while (st<=ed) {

            int mid = st + (ed-st) / 2;

            if (isValid(nums,mid,m)) {
                ans = mid;
                st = mid+1;
            }
            else {
                ed = mid-1;
            }
        } 

        return ans;
        
    }
};