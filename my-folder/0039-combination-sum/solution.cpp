class Solution {
        vector<vector<int>> answer;
        vector<int> test;
        int n;
    void combine(vector<int>& candidates,int target,int i){
        if(target==0) answer.push_back(test);
        else if(target<0) return;
        for(int j=i;j<n;j++){
            test.push_back(candidates[j]);
            combine(candidates,target-candidates[j],j);
            test.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        n=candidates.size();
        sort(candidates.begin(),candidates.end());
        for(int i=0;i<n;i++)
        {
            test.push_back(candidates[i]);
            combine(candidates,target-candidates[i],i);
            test.pop_back();
        }
        return answer;
    }
};
