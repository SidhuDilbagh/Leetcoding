class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        int arr[101]={0};
        for(int i=0;i<n;i++)
            for(int j=nums[i][0];j<=nums[i][1];j++)
                arr[j]=1;
        int count=0;
        for(int i=0;i<101;i++)
            if(arr[i])
                count++;
        return count;
    }
};