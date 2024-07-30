class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[++amount],n=coins.size();
        dp[0]=0;
        for(int i=1;i<amount;i++){
            dp[i]=INT_MAX-1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<amount;j++){
                if(coins[i]<=j){
                    dp[j]=min(dp[j],dp[j-coins[i]]+1);
                }
            }
        }
        if(dp[amount-1]>=INT_MAX-1) return -1;
        return dp[amount-1];
    }
};
