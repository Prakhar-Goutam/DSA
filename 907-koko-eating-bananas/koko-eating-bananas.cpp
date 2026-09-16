class Solution {
public:

    long long totalTime (vector<int> &nums , int k) {

        int n = nums.size();
        long long totalEat = 0;

        for (int i = 0; i<n; i++) {
            totalEat += (nums[i]+k-1) / k;
        }

        return totalEat;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int maxE = INT_MIN;
        int n = piles.size();
        
        for (int i = 0; i<n ; i++) {

            maxE = max (maxE , piles[i]);
        }

        int st = 1;
        int ed = maxE;

        while (st<=ed) {

            int mid = st + (ed-st)/2;

            long long temp = totalTime(piles, mid);

            if (temp<= h) {
                ed = mid-1;
            }
            else {
                st = mid+1;
            }
        }

        return st;

        
        
    }
};