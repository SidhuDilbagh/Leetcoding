class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int> t(nums.begin(),nums.end());
        vector<int> temp(t.begin(),t.end());
        sort(temp.begin(),temp.end());

        int m=nums.size();
        int n=temp.size();
        int dp[n][m];
        dp[0][0]=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i]==nums[j]){
                    dp[i][j]=1;
                    if(i&&j){
                        dp[i][j]+=dp[i-1][j-1];
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
                }
            }
        }
        return max(dp[n-1][m-1],1);
    }
};
