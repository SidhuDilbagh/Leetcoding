class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-INT_MAX,check=0;
        for(int x:nums){
            check+=x;
            ans=max(check,ans);
            if(check<0) check=0;
        }
        return ans;
    }
};
