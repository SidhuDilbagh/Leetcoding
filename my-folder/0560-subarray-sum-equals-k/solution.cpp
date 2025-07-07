class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int tot=0;
            for(int j=i;j<nums.size();j++){
                tot+=nums[j];
                if(tot==k){
                    count++;
                }
            }
        }
        return count;
    }
};
