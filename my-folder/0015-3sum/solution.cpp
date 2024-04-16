class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        int n=size(nums);
        int p;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                p=i;
                break;
            }
        }
        for(int i=0;i<p;i++){
            for(int j=i+1;j<p;j++){
                int t=nums[i]+nums[j];
                if(binary_search(nums.begin()+p,nums.end(),-t)){
                    answer.push_back({nums[i],nums[j],-t});
                    while(j+1<n && nums[j]==nums[j+1]) j++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        int z=0;
        while(p+z+1<n && nums[p+z+1]==0) z++;
        if(z>1) answer.push_back({0,0,0});
        p=p+z;
        for(int i=p;i<n;i++){
            for(int j=i+1;j<n;j++){
                int t=nums[i]+nums[j];
                if(binary_search(nums.begin(),nums.begin()+p,-t)){
                    answer.push_back({-t,nums[i],nums[j]});
                    while(j+1<n && nums[j]==nums[j+1]) j++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return answer;
    }
};
