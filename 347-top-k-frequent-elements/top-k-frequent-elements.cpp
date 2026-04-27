class Solution {
public:
        
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;
        int n = nums.size();

        for (int i = 0; i<n ; i++) {
            mpp[nums[i]]++;
        }

        auto lambda = [&] (pair<int,int> &p1, pair<int,int>p2) {
            return p1.second> p2.second;
        };

        vector<pair<int,int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin() , vec.end() , lambda);

        vector<int> ans;

        for (int i = 0; i<k ; i++) {

            ans.push_back(vec[i].first);
        }

        return ans;
        
    }
};