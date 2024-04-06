class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stc;
        int n=size(s);
        for(int i=0;i<n;i++){
            if(s[i]=='(') stc.push(i);
            else if(s[i]==')'){
                if (stc.empty()) {
                    s.erase(i,1);
                    i--;
                }
                else stc.pop();
            }
        }
        while(!stc.empty()){
            s.erase(stc.top(),1);
            stc.pop();
        }
        return s;
    }
};
