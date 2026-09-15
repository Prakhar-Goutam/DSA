class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1;
        int ed = *max_element(piles.begin(), piles.end());

        while (st <= ed) {
            int mid = st + (ed - st) / 2;

            long long hours = 0;

            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }

            if (hours <= h) {
                ed = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return st;
    }
};