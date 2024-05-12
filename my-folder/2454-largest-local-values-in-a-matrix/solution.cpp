class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=size(grid);
        vector<vector<int>> g(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=1;j<n-1;j++){
                cout<<i<<j<<endl;
                g[i][j]=max(grid[i][j],max(grid[i][j-1],grid[i][j+1]));
            }
        }
        vector<vector<int>> answer(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                answer[i][j]=max(g[i][j+1],max(g[i+1][j+1],g[i+2][j+1]));
            }
        }
        return answer;
    }
};
