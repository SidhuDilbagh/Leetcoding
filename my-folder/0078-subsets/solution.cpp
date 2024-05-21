class Solution {
    vector<vector<int>> answer;
    void createPowerSet(vector<int> &set,vector<int>& nums, int index)
    {
        if(index==size(nums)) {
            answer.push_back(set);
        }
        else{
            set.push_back(nums[index]);
            createPowerSet(set,nums,index+1);
            set.pop_back();
            createPowerSet(set,nums,index+1);
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> newSet={};
        createPowerSet(newSet,nums,0);
        return answer;
    }
};
