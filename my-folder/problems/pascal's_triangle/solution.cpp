class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> out;
        for(int i=0;i<numRows;i++)
        {
            out.push_back(vector<int>(i+1));
            if(!i)
            out[0][0]=1;
            else
            for(int j=0;j<=i;j++)
            {
                if(j>0 && j<i)
                out[i][j]=out[i-1][j-1]+out[i-1][j];
                else
                out[i][j]=1;
            }
        }
        return out;
    }
};