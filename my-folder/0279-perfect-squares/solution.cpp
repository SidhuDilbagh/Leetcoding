class Solution {
public:
    int numSquares(int n) {
        n++;
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<n;i++){
            for(int j=1;j*j<=i;j++){
                if(j*j==i){
                    dp[i]=1;
                }
                else{
                    dp[i]=min(dp[i],dp[j*j]+dp[i-j*j]);
                }
            }
        }
        return dp[n-1];
    }
};
