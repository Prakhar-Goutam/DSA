class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> mpp;

        for (int i = 0; i<n; i++) {
            mpp[nums[i]]++;
        }

        vector<pair<int, int>> vec (mpp.begin(), mpp.end());

        auto lambda = [&] (pair<int,int> &p1, pair<int , int> &p2) {
            
            if(p1.second==p2.second) {
                if (p1.first>p2.first) return true;
                return false;
            }
            return p1.second<p2.second;
        };

        sort(vec.begin() , vec.end() , lambda);

        vector<int> ans;

        for (int i =0; i<vec.size(); i++) {
            
            int num = vec[i].first;
            int freq = vec[i].second;

            for (int j = 0; j< freq; j++) {
                ans.push_back(num);
            }
        }

        return ans;
        
    }
};