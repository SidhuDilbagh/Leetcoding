class Solution {
    int findBits(const int num){
        int temp=num;
        int bits=0;
        while(temp){
            // cout<<temp;
            if(temp%2){
                bits++;
            }
            temp/=2;
        }
        return bits;
    }
public:
    bool canSortArray(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            int set=findBits(nums[i]);
            int j=i+1;
            while(j<n){
                if(set==findBits(nums[j])){
                    j++;
                }
                else{
                    break;
                }
            }
            sort(nums.begin()+i,nums.begin()+j);
            i=j-1;
            i++;
            // cout<<i<<j<<endl;
        }
        for(int x:nums){
            cout<<x<<" ";
        }
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
};
