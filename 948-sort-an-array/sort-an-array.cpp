class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        if (n <= 1) return nums;

        // Step 1: find min and max
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        // Step 2: decide bucket size & count
        int bucketSize = max(1, (mx - mn) / n);
        int bucketCount = (mx - mn) / bucketSize + 1;

        vector<vector<int>> buckets(bucketCount);

        // Step 3: fill buckets
        for (int num : nums) {
            int idx = (num - mn) / bucketSize;
            buckets[idx].push_back(num);
        }

        // Step 4: sort each bucket & merge
        vector<int> ans;

        for (auto &bucket : buckets) {
            sort(bucket.begin(), bucket.end());
            for (int x : bucket) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};