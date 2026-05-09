class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> mpp;

        for (int i = 0; i<strs.size(); i++) {
            string s = strs[i];

            vector <int> freq(26,0);

            for (int j = 0; j < s.size(); j++) {
                freq[s[j] - 'a']++;
            }

            string key = "";

            for (int j = 0; j<26 ; j++) {
                key += "#";
                key += to_string(freq[j]);
            }

            mpp[key].push_back(s);   
        }

        vector<vector<string>> ans;

        for (auto &it :mpp) {
            ans.push_back(it.second);
        }

        return ans;
        
    }
};