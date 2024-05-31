class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int z:nums) x^=z;
        return x;
    }
};
