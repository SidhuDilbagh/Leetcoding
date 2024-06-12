class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0};
        for(int x:nums) count[x]++;
        int i=0;
        int j=0;
        for(int x:count){
            while(x--) {
                nums[i]=j;
                i++;
            }
            j++;
        }
    }
};
