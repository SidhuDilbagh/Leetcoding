class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        for(char x:s){
            if(x=='[' || x=='(' || x=='{') stck.push(x);
            else if(!stck.empty() && ((stck.top()=='(' && x==')') || (stck.top()=='{' && x=='}') || (stck.top()=='[' && x==']'))) stck.pop();
            else return false;
        }
        if(!stck.empty()) return false;
        return true;
    }
};
