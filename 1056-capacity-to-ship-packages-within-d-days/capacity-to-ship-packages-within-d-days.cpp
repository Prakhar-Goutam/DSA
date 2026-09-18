class Solution {
public:

    int func (vector<int> & nums , int mid) {

        int n = nums.size();

        int sum = 0;
        int count = 0;
        for (int i=0; i<n; i++) {

            sum += nums[i];

            if (sum > mid) {
                count ++;
                sum = nums[i];
            }
        }

        return count+1;
        
    }
    int shipWithinDays(vector<int>& nums, int days) {

        int n = nums.size();

        int ans = 0;

        int maxE = INT_MIN;
        int sum = 0;

        for (int i = 0; i<n; i++) {
            maxE = max (maxE , nums[i]);
            sum += nums[i];
        }

        int st = maxE;
        int ed = sum;

        while (st <= ed) {

            int mid = st + (ed-st) / 2;

            int temp = func (nums,mid);

            if (temp <= days) {
                ans = mid;
                ed = mid-1;
            }
            else {
                st = mid+1;
            }

            
        }
        
        return ans;
    }
};