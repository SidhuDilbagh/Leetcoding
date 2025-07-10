class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        int left=nums[0],right=nums[n-1];
        for(int i=1;i<n;i++){
            answer[i]*=left;
            left*=nums[i];
            answer[n-i-1]*=right;
            right*=nums[n-i-1];
        }
        return answer;
    }
};
