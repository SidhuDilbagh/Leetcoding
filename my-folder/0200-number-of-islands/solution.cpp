class Solution {
    int n;
    int m;
    void counter(vector<vector<char>>& grid,int i,int j){
        grid[i][j]='.';
        if(i>0){
            if(grid[i-1][j]=='1'){
                counter(grid,i-1,j);
            }
        }
        if(j>0){
            if(grid[i][j-1]=='1'){
                counter(grid,i,j-1);
            }
        }
        if(i<n-1){
            if(grid[i+1][j]=='1'){
                counter(grid,i+1,j);
            }
        }
        if(j<m-1){
            if(grid[i][j+1]=='1'){
                counter(grid,i,j+1);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        n=size(grid);
        m=size(grid[0]);
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    counter(grid,i,j);
                }
            }
        }
        return count;
    }
};
