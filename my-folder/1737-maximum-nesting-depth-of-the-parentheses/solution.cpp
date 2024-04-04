class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int ans=0;
        for(char x:s){
            if(x=='(') count++;
            else if(x==')') count--;
            ans=max(ans,count);
        }
        return ans;
    }
};
