#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int minDays(std::vector<int>& bloomDay, int m, int k) {
        long long total_flowers = (long long)m * k;
        if (total_flowers > bloomDay.size()) return -1; // Not enough flowers

        int low = INT_MAX, high = INT_MIN;
        for (int day : bloomDay) {
            low = std::min(low, day);
            high = std::max(high, day);
        }

        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                ans = mid;         // Possible, try to find a smaller day
                high = mid - 1;
            } else {
                low = mid + 1;     // Not enough time, need more days
            }
        }
        return ans;
    }

private:
    bool canMakeBouquets(const std::vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0;
        int consecutive_flowers = 0;

        for (int b : bloomDay) {
            if (b <= day) {
                consecutive_flowers++;
                if (consecutive_flowers == k) {
                    bouquets++;
                    consecutive_flowers = 0; // Reset for next bouquet
                }
            } else {
                consecutive_flowers = 0; // Chain is broken
            }
        }
        return bouquets >= m;
    }
};
