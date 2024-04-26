class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=size(grid);
        int arr[n][n];
        if(n==1) return grid[0][0];
        for(int j=0;j<n;j++) arr[n-1][j]=grid[n-1][j];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                int m=INT_MAX;
                for(int z=0;z<n;z++){
                    if(j!=z) m=min(m,arr[i+1][z]);
                }
                arr[i][j]=m+grid[i][j];
            }
        }
        int answer=INT_MAX;
        for(int i=0;i<n;i++) answer=min(answer,arr[0][i]);
        return answer;
    }
};
