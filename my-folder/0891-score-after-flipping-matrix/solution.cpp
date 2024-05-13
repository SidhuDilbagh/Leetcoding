class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=size(grid);
        int m=size(grid[0]);
        for(int i=0;i<n;i++){
            if(!grid[i][0]){
                for(int j=0;j<m;j++){
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        for(int i=1;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(!grid[j][i]) {
                    count++;
                }
            }
            if(count>n/2){
                for(int j=0;j<n;j++){
                    grid[j][i]=!grid[j][i];
                }
            }
        }
        int score=0;
        for(int i=0;i<n;i++){
            int num=0;
            int mul=1;
            for(int j=m-1;j>=0;j--){
                num+=mul*grid[i][j];
                mul*=2;
            }
            score+=num;
        }
        return score;
    }
};
