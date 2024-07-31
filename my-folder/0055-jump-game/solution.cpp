class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        // if(n==1) return true;
        int maxPossible=nums[0];
        for(int i=0;i<n;i++){
            maxPossible = max(maxPossible,i+nums[i]);
            if(maxPossible==i) break;
            // cout<<maxPossible<<" ";
        }
        return n-1<=maxPossible;
    }
};
