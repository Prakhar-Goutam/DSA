class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        int Mxi[n];

        Mxi[0] = nums[0];
        for (int i = 1; i<n ; i++) {

            Mxi[i] = max(Mxi[i-1], nums[i]);
        }

        for (int i = 0; i <n; i++) {
            nums[i] = gcd(Mxi[i], nums[i]);
        }

        sort(nums.begin(), nums.end());

        int st = 0;
        int ed = n-1;
        long long sum = 0;

        while (st < ed) {

            long long w = gcd(nums[st],nums[ed]);

            sum = sum + w;
            st++;
            ed--;


        }

        return sum;
        
    }
};