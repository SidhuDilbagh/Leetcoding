class Solution {
    string binary(int num){
        string binary;
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary.empty() ? "0" : binary;
    }
    int decimal(string bin[3]){
        int ans=0,mul=1;
        string temp=bin[0]+bin[1]+bin[2];
            for(int i=temp.size()-1;i>=0;i--){
                if(temp[i]=='1'){
                    ans+=mul;
                }
                mul*=2;
            }
        return ans;
    }
public:
    int maxGoodNumber(vector<int>& nums) {
        string bin[3];
        bin[0]=binary(nums[0]),bin[1]=binary(nums[1]),bin[2]=binary(nums[2]);
        sort(bin,bin+3,[](const string a, const string b){return a + b > b + a;});
        return decimal(bin);
    }
};
