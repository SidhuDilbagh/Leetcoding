class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=0;
        dp[0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i || j){
                    int l=0;
                    if(j) l=dp[j-1];
                    dp[j]+=l;
                }
            }
        }
        return dp[n-1];
    }
};
