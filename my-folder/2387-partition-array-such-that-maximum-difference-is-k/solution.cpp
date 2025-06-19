class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=1;
        int startPtr=0;
        int ptr=0;
        int n=nums.size();
        while(ptr<nums.size()){
            if(nums[ptr]-nums[startPtr]>k){
                count++;
                startPtr=ptr;
            }
            ptr++;
        }
        return count;
    }
};
