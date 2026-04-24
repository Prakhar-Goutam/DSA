class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;
        long long n = nums.size();
        long long sum = 0;
        mpp[0]= -1;;

        for (int i = 0; i<n ; i++) {

            sum+= nums[i];
            long long rem = (sum%k+k)%k;

            if (mpp.find(rem) != mpp.end()) {
                if (i-mpp[rem] > 1) {
                    return true;
                }
            }

            else {
            mpp[rem] = i;
            }

        }

        return false;
        
    }
};