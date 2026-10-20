class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        
        int n = nums.size();
        int ans = -1;

        if ((long long)m*k > n) {
            return -1;
        }

        int minE = INT_MAX;
        int maxE = INT_MIN;

        for (int i = 0; i<n; i++) {
            minE = min (minE,nums[i]);
            maxE = max (maxE,nums[i]);
        }

        int st = minE;
        int ed = maxE;

        while (st<=ed) {

            int mid = st + (ed-st) / 2;

            int count = 0;
            int x = k;

            for (int i = 0; i<n; i++) {

                if (nums[i] <= mid) {
                    x--;
                }

                else {
                    x=k;
                }

                if (x==0) {
                    count++;
                    x = k;
                }
            }

            if (count >= m) {
                ed = mid -1;
                ans = mid;
            }

            else {
                st = mid+1;
            }
        }

        return ans;
    }
};