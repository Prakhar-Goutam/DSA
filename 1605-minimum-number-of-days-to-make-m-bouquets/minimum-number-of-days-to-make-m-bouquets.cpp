class Solution {
public:

    bool isPossible (vector<int> & nums, int m, int k, int mid) {

        int n = nums.size();
        int count = 0;
        int x = 0;

        for (int i = 0; i<n; i++) {

            if (nums[i] <= mid) {
                count++;
            }

            else {
                x += count/k;
                count = 0;

            }
        }

        x+= count/k;

        if (x>=m) {
            return true;
        }
        else {
            return false;
        }
    }
    long long minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        if ((long long)m*k > n) {
            return -1;
        }

        int minE = INT_MAX;
        int maxE = INT_MIN;

        for (int i = 0; i<n; i++) {
            minE = min (minE, bloomDay[i]);
            maxE = max (maxE , bloomDay[i]);
        }

        int st = minE;
        int ed = maxE;

        while (st<=ed) {

            int mid = st + (ed-st) / 2;

            if (isPossible(bloomDay, m , k, mid)) {
                ed = mid-1;
            }

            else {
                st = mid+1;
            }

            
        }

        return st;
        
    }
};