class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        if(nums[left]<nums[right]) return nums[left];
        while(1){
            int mid=left+(right-left)/2;
            if(right-left<2) return min(nums[left],nums[right]);
            else if(nums[mid]>nums[left]) left=mid;
            else right=mid;
        }
        return -1;
    }
};
