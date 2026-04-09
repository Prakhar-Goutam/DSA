class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        int n = nums.size();
        long long totalsum = 0;

        for (int i = 0; i < n; i++) {
            totalsum = totalsum + nums[i];
        }

        int target = totalsum % p;
        if (target == 0) return 0;

        unordered_map<int,int> mpp;
        mpp[0] = -1;

        long long sum = 0;
        int Minl = n;

        for (int i = 0; i < n; i++) {

            sum = sum + nums[i];
            int Currem = sum % p;
            int needed = (Currem-target+p) % p;

            if (mpp.find(needed) != mpp.end()) {
                Minl = min (Minl , i-mpp[needed]);
            }

            mpp[Currem] = i;
        }

        return (Minl==n ? -1:Minl);


        
    }
};