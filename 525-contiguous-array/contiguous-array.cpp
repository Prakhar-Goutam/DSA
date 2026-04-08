class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int>mpp;
        int Maxl = 0;
        int sum = 0;
        mpp[0] = -1;

        for (int i=0; i <n ; i++) {
            if (nums[i]==0) {
                nums[i]= -1;
            }
        }

        for (int i = 0; i <n ; i++) {

            sum = sum + nums[i];

            if (mpp.find(sum) != mpp.end()) {
                Maxl = max(Maxl, i- mpp[sum]);
            }

            else {
                mpp[sum] = i;
            }

        }

        return Maxl;

    }

};