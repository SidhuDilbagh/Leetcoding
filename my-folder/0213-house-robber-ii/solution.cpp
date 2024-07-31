class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        else if(n==2) return max(nums[0],nums[1]);
        int a=nums[0];
        int b=max(a,nums[1]);
        for(int i=2;i<n-1;i++){
            int c=max(a+nums[i],b);
            a=b;
            b=c;
        }
        int test=max(a,b);
        a=nums[1];
        b=max(a,nums[2]);
        for(int i=3;i<n;i++){
            int c=max(a+nums[i],b);
            a=b;
            b=c;
        }
        return max(test,max(a,b));
    }
};
