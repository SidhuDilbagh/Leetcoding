class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer={1};
        int n=size(nums);
        int num=nums[0];
        for(int i=1;i<n;i++) {
            answer.push_back(num);
            num*=nums[i];
        }
        num=nums[n-1];
        for(int i=n-2;i>=0;i--){
            answer[i]*=num;
            num*=nums[i];
        }
        return answer;
    }
};
