class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int average=0,sum=0;
        int n=size(nums);
        for(int i=0;i<k;i++){
            average+=nums[i];
        }
        sum=average;
        int i=0,j=k;
        while(j<n){
            sum=sum-nums[i]+nums[j];
            average=max(sum,average);
            i++;
            j++;
        }
        return (double)average/k;
    }
};
