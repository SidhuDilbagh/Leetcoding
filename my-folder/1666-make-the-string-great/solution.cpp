class Solution {
public:
    string makeGood(string s) {
        int n=size(s)-1;
        for(int i=0,j=1;i<n;){
            if(s[i]-32==s[j] || s[j]-32==s[i]){
                s.erase(i,2);
                if(i && j){
                    i--;
                    j--;
                }
            }
            else{
                i++;
                j++;
            }
        }
        return s;
    }
};
