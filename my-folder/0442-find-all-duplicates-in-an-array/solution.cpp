class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=abs(nums[i])-1;
            if(nums[temp]<0) ans.push_back(temp+1);
            nums[temp]*=-1;
        } 
        return ans;
    }
};
