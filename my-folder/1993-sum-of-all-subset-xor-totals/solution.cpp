class Solution {
    int n;
    int answer(vector<int>& nums,int i,int value){
        if(i==n) return value;
        int include=answer(nums,i+1,nums[i]^value);
        int dontInclude=answer(nums,i+1,value);
        return include+dontInclude;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        n=size(nums);
        return answer(nums,0,0);
    }
};
