class Solution {
public:
    int maximumGap(vector<int>& nums) {

        int n = nums.size();
        int maxDiff = 0;

        if (n<2) return 0;

        sort(nums.begin() , nums.end());

        for (int i =1; i<n; i++) {
            int diff = nums[i] - nums[i-1];
            maxDiff = max (maxDiff , diff);
        }

        return maxDiff;
        
    }
};