class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count=0,n=nums.size()+*max_element(nums.begin(),nums.end())+1;
        vector<int> freq(n,0);
        for(int x:nums){
            freq[x]++;
        }
        for(int i=0;i<n;i++){
            if(freq[i]>1){
                freq[i+1]+=freq[i]-1;
                count+=freq[i]-1;
            }
        }
        return count;
    }
};
