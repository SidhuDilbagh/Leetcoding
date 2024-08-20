class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDiff=0;
        int least=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            least=min(prices[i],least);
            maxDiff=max(maxDiff,prices[i]-least);
        }
        return maxDiff;
    }
};
