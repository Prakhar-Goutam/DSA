class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map <string, int> mpp;

        for (int i =0; i< words.size() ; i++) {
            mpp[words[i]]++;
        }

        vector<pair<string, int>> vec(mpp.begin(), mpp.end());

        auto lambda = [&] (pair<string,int> &p1, pair<string,int> &p2) {

            if (p1.second==p2.second) {
                if(p1.first<p2.first) return true;
                return false;
            }
            return p1.second> p2.second;
        };

        sort(vec.begin(), vec.end(), lambda);

        vector<string> ans;

        for (int i=0; i<k ; i++) {

            ans.push_back(vec[i].first);
        }

        return ans;


        
    }
};