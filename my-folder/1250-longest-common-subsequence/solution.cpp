class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(text1[i]==text2[j]){
                    if(i && j){
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else{
                        dp[i][j]=1;
                    }
                }
                else{
                    if(i && j){
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                    else if(i){
                        dp[i][j]=dp[i-1][j];
                    }
                    else if(j){
                        dp[i][j]=dp[i][j-1];
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
            }
        }
        return dp[n-1][m-1];
    }
};
