class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {


        unordered_map<long long, long long> bucket;
        long long width = (long long)t + 1;   // bucket size

        for (int i = 0; i < nums.size(); i++) {

            long long num = nums[i];

            // bucket id (handle negatives properly)
            long long id = num / width;
            if (num < 0) id--;

            // 1. same bucket
            if (bucket.count(id)) return true;

            // 2. left bucket
            if (bucket.count(id - 1) && 
                abs(num - bucket[id - 1]) <= t) return true;

            // 3. right bucket
            if (bucket.count(id + 1) && 
                abs(num - bucket[id + 1]) <= t) return true;

            // insert current
            bucket[id] = num;

            // maintain window size k
            if (i >= k) {
                long long old = nums[i - k];
                long long oldId = old / width;
                if (old < 0) oldId--;
                bucket.erase(oldId);
            }
        }

        return false;
    }
};