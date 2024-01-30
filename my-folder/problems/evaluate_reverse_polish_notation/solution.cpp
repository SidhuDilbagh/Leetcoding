class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        for(auto i: tokens){
            if(i=="-"){
                int a=temp.top();
                temp.pop();
                int b=temp.top();
                temp.pop();
                temp.push(b-a);
            }
            else if(i=="+"){
                int a=temp.top();
                temp.pop();
                int b=temp.top();
                temp.pop();
                temp.push(b+a);
            }
            else if(i=="*"){
                int a=temp.top();
                temp.pop();
                int b=temp.top();
                temp.pop();
                temp.push(b*a);
            }
            else if(i=="/"){
                int a=temp.top();
                temp.pop();
                int b=temp.top();
                temp.pop();
                temp.push(b/a);
            }
            else{
                temp.push(stoi(i));
            }
        }
        return temp.top();
    }
};