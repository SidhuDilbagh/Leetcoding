class Solution {
    int n;
    void finder(vector<vector<bool>> &dp, vector<vector<string>> &answer,int i,vector<string> &check,string &s){
        if(i==n){
            answer.push_back(check);
        }
        else{
            for(int j=0;j<n;j++){
                if(dp[i][j]==1){
                    check.push_back(s.substr(i,j-i+1));
                    finder(dp,answer,j+1,check,s);
                    check.pop_back();
                }
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        n=size(s);
        vector<vector<string>> answer;
        vector<string> check;
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        for(int len=0;len<n;len++){
            for(int i=0;i+len<n;i++){
                if(!len) dp[i][i+len]=1;
                else if(len==1 && s[i]==s[i+1]) dp[i][len+i]=1;
                else if(s[i]==s[i+len] && dp[i+1][len-1+i]) dp[i][len+i]=1;
            }
        }
        finder(dp,answer,0,check,s);
        return answer;
    }
};
