class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int sum = 0;
        int count = 0;

        for (int i = 0; i< n ; i++) {
            
            sum = sum + (nums[i] % 2);
            int remove = sum-k;
            count = count + mpp[remove];
            mpp[sum]++;
        }

        return count;
        
    }
};