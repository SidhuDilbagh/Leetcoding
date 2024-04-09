class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int points=nums[0][1]-nums[0][0]+1;
        int n=size(nums);
        int end=nums[0][1];
        for(int i=1;i<n;i++){
            if(end<nums[i][0]){
                points+=nums[i][1]-nums[i][0]+1;
                end=nums[i][1];
            }
            else if(end>=nums[i][0] && end<nums[i][1]){
                points+=nums[i][1]-end;
                end=nums[i][1];
            }
        }
        return points;
    }
};
