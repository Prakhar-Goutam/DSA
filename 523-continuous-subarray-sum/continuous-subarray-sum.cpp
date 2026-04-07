class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> mpp;
        long long sum = 0;
        mpp[0]= -1;

        for (int i=0; i <n; i++) {

            sum = sum + nums[i];

            long long rem = (sum % k + k) %k  ;
            
            if (mpp.find(rem) != mpp.end()) {

                 if (i- mpp[rem] > 1) {
                    return true;
                }
              
            }

            else {  
                  mpp.insert({rem,i});
            }


        }

        return false;


        
    }
};