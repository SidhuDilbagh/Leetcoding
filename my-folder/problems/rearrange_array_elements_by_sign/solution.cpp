class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int i=0,j=1;
        for(int z=0;z<n;z++){
            if(nums[z]>0){
                ans[i]=nums[z];
                i+=2;
            }
            else{
                ans[j]=nums[z];
                j+=2;
            }
        }
        return ans;
    }
};