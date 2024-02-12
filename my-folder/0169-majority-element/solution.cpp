class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check=-1,votes=0;
        for(int i:nums){
            if(!votes){
                check=i;
                votes++;
            }
            else{
                if(check==i) votes++;
                else votes--;
            }
        }
        return check;
    }
};
