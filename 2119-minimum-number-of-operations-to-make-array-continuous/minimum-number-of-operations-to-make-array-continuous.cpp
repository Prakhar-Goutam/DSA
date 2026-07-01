class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();
        int minChanges = n;

        unordered_set<int> st (nums.begin(), nums.end());
        vector<int>temp (st.begin() , st.end());
        sort (temp.begin() , temp.end());

        for (int i = 0; i<temp.size(); i++) {

            int minE = temp[i];
            int maxE = temp[i] + n - 1;

            int j = upper_bound(temp.begin(),temp.end() , maxE) - temp.begin();

            minChanges = min (minChanges , n-(j-i));

        }

        return minChanges;
        
    }
};