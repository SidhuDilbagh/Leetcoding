class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> row,col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!matrix[i][j]){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int r:row){
            for(int i=0;i<m;i++){
                matrix[r][i]=0;
            }
        }
        for(int c:col){
            for(int i=0;i<n;i++){
                matrix[i][c]=0;
            }
        }
    }
};
