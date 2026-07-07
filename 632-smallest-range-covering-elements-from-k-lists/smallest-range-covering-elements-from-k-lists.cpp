class Solution {
public:
    typedef pair<int, pair<int,int>> p;

    vector<int> smallestRange(vector<vector<int>>& nums) {

        priority_queue<p, vector<p>, greater<p>> pq;

        int maxi = INT_MIN;

        // Put first element of every list
        for(int i = 0; i < nums.size(); i++) {
            pq.push({nums[i][0], {i, 0}});
            maxi = max(maxi, nums[i][0]);
        }

        int start = 0;
        int end = INT_MAX;

        while(true) {

            auto curr = pq.top();
            pq.pop();

            int mini = curr.first;
            int row = curr.second.first;
            int col = curr.second.second;

            // Better range found
            if(maxi - mini < end - start) {
                start = mini;
                end = maxi;
            }

            // If current list ends, we cannot continue
            if(col + 1 == nums[row].size())
                break;

            // Push next element of same list
            pq.push({nums[row][col + 1], {row, col + 1}});

            // Update maximum
            maxi = max(maxi, nums[row][col + 1]);
        }

        return {start, end};
    }
};