class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int , int> mpp;

        for (int i = 0; i<n; i++) {
            mpp[nums[i]] ++;
        }

        vector<vector<int>> bucket(n+1);

        for(auto &p :mpp) {
            bucket[p.second].push_back(p.first);
        }

         // step 3: collect answer
        vector<int> ans;

        for (int i = n; i >= 1; i--) {

            for (int num : bucket[i]) {
                ans.push_back(num);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }
        return ans;
        
    }
};