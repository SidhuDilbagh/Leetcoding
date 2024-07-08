class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        int left=nums[0],right=nums[n-1];
        for(int i=1,j=n-2;i<n;i++,j--){
            answer[i]*=left;
            left*=nums[i];
            answer[j]*=right;
            right*=nums[j];
        }
        return answer;
    }
};
