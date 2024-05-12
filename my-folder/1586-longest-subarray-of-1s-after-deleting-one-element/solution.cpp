class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=size(nums);
        int i=0,j=0,count=0,maxCount=0;
        bool canDelete=true,allOne=true;
        while(j<n){
            if(nums[j]==1){
                j++;
                count++;
            }
            else{
                allOne=false;
                if(canDelete){
                    canDelete=false;
                    j++;
                }
                else{
                    while(i<=j && nums[i]==1){
                        i++;
                        count--;
                    }
                    if(i<=j && nums[i]==0){
                        canDelete=true;
                        i++;
                    }
                    else if(i>j){
                        i=j;
                        count=0;
                        while(j<n && nums[j]!=1){
                            i++;
                            j++;
                        }
                    }
                }
            }
            maxCount=max(count,maxCount);
        }
        if(allOne) maxCount--;
        return maxCount;
    }
};
