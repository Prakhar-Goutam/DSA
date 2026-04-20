class Solution {
public:
    int maxDistance(vector<int>& nums) {

        int n = nums.size();
        int st = 0;
        int ed = n-1;

        while (st<ed && nums[st]==nums[ed]) {
            ed--;
        }

        int ans1 = ed - st;
        ed=n-1;

        while (st<ed && nums[st]==nums[ed]) {
            st++;
        }

        int ans2 = ed - st;

        int Max = max(ans1,ans2);

        return Max;
        
    }
};