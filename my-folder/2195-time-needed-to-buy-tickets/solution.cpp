class Solution {
public:
    int timeRequiredToBuy(vector<int>& A, int k) {
        int ans = 0;
        int temp=A[k];
        for (int i = 0; i < A.size(); ++i) {
            ans += min(temp - (i > k), A[i]);
        }
        return ans;
    }
};
