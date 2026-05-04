class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        unordered_map<int,int>mpp;
        int n = nums.size();
        mpp[0] = 1;
        int count = 0;
        int sum = 0;

        for (int i = 0; i<n ; i++) {

            sum += nums[i] % 2;
            int prev = sum - k;

            if (mpp.find(prev) != mpp.end()) {
                count += mpp[prev];
            }
            
            mpp[sum]++;
        }

        return count;
        
    }
};