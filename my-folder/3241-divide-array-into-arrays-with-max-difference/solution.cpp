class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        vector<vector<int>> output(n/3, vector<int>(3));
        int ptr=0;
        for(int i=0;i<n/3;i++){
            for(int j=0;j<3;j++){
                if((j && nums[ptr]-output[i][0] <=k) || !j){
                    output[i][j]=nums[ptr];
                    ptr++;
                }
                else{
                    return vector<vector<int>>();
                }
            }
        }
        return output;
    }
};
