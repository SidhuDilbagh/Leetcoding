class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,bool> check;
        int even=0;
        for(char x:s){
            if(check[x]==1){
                check[x]=0;
                even++;
            }
            else{
                check[x]=1;
            }
        }
        for(auto x:check){
            if(x.second==1) return 2*even+1;
        }
        return 2*even;
    }
};
