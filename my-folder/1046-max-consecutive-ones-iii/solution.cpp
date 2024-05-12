class Solution {
public:
int longestOnes(vector<int>& nums, int k) {
        int n=size(nums);
        int i=0,j=0;
        int count=0,maxCount=0,flips=0;
        while(j<n){
            if(nums[j]==1){
                count++;
                j++;
            }
            else if(nums[j]==0){
                if(flips<k){
                    flips++;
                    nums[j]=-1;
                    count++;
                    j++;
                }
                else{
                    while(i<n && nums[i]!=-1 && i<=j){
                        i++;
                        count--;
                    }
                    if(i>j){
                        i=j;
                        count=0;
                        while(j<n && nums[j]!=1){
                            i++;
                            j++;
                        }
                    }
                    else if(nums[i]==-1){
                        nums[i]=0;
                        flips--;
                        count--;
                        i++;
                    }
                }
            }
            maxCount=max(count,maxCount);
        }
        return maxCount;
    }
};
