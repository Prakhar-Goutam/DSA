class Solution {
public:

    typedef pair<int,int> p;
    int longestSubarray(vector<int>& nums, int limit) {

        int n = nums.size();

        priority_queue<p, vector<p>> maxHeap;
        priority_queue<p, vector<p> , greater<p>> minHeap;

        int l = 0;
        int maxL = 0;

        for (int r = 0; r<n; r++) {

            maxHeap.push({nums[r], r});
            minHeap.push({nums[r], r});

            while (maxHeap.top().first- minHeap.top().first > limit) {

                l = min (maxHeap.top().second , minHeap.top().second) + 1;

                while (maxHeap.top().second < l) {
                    maxHeap.pop();
                }

                while (minHeap.top().second < l) {
                    minHeap.pop();
                }

            }

            maxL = max (maxL, r-l+1);
        }

        return maxL;
        
    }
};