class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=size(nums)-1,count=0;
        while(i<j){
            if(nums[i]+nums[j]<k) i++;
            else if(nums[i]+nums[j]>k) j--;
            else{
                i++;
                j--;
                count++;
            }
        }
        return count;
    }
};
