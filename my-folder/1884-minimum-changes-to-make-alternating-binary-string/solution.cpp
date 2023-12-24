class Solution {
public:
    int minOperations(string s) {
        int n= s.length();
        int change0=0;
        char temp='1';
        for(int i=0;i<n;i++){
            if(s[i]==temp){
                change0++;
            }
            if(temp=='1'){
                temp='0';
            }
            else{
                temp='1';
            }
        }
        return min(change0,n-change0);
    }
};
