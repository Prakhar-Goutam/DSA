class Solution {
public:

    typedef pair<int,int> p;
    long long continuousSubarrays(vector<int>& nums) {

        int n = nums.size();
        long long ans = 0;

        priority_queue<p,vector<p>> maxPq;
        priority_queue<p,vector<p> , greater<p>> minPq;

        int j = 0;
        int i = 0;

        while (j<n) {

            maxPq.push({nums[j],j});
            minPq.push({nums[j],j});

            while (maxPq.top().first- minPq.top().first > 2) {

                i = min (maxPq.top().second, minPq.top().second) + 1;

                while (maxPq.top().second<i) {
                    maxPq.pop();
                }

                while (minPq.top().second<i) {
                    minPq.pop();
                }
            }

            ans += j-i+1;
            j++;
        }

        return ans;
        
    }
};