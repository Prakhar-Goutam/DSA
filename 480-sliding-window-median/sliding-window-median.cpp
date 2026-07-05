class Solution {
public:
    priority_queue<int> small; // max heap
    priority_queue<int, vector<int>, greater<int>> large; // min heap

    unordered_map<int,int> delayed;

    int smallSize = 0;
    int largeSize = 0;

    void pruneSmall() {
        while (!small.empty() && delayed[small.top()]) {
            delayed[small.top()]--;
            small.pop();
        }
    }

    void pruneLarge() {
        while (!large.empty() && delayed[large.top()]) {
            delayed[large.top()]--;
            large.pop();
        }
    }

    void balance() {

        if (smallSize > largeSize + 1) {

            large.push(small.top());
            small.pop();

            smallSize--;
            largeSize++;

            pruneSmall();
        }

        else if (smallSize < largeSize) {

            small.push(large.top());
            large.pop();

            smallSize++;
            largeSize--;

            pruneLarge();
        }
    }

    void add(int num) {

        if (small.empty() || num <= small.top()) {
            small.push(num);
            smallSize++;
        }

        else {
            large.push(num);
            largeSize++;
        }

        balance();
    }

    void remove(int num) {

        delayed[num]++;

        if (num <= small.top()) {
            smallSize--;

            if (num == small.top())
                pruneSmall();
        }

        else {
            largeSize--;

            if (num == large.top())
                pruneLarge();
        }

        balance();
    }

    double getMedian(int k) {

        if (k % 2)
            return small.top();

        return ((double)small.top() +
                (double)large.top()) / 2.0;
    }

    vector<double> medianSlidingWindow(vector<int>& nums, int k) {

        vector<double> ans;

        for (int i = 0; i < nums.size(); i++) {

            add(nums[i]);

            if (i >= k)
                remove(nums[i-k]);

            if (i >= k-1)
                ans.push_back(getMedian(k));
        }

        return ans;
    }
};