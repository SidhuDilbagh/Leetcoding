class Solution {
public:
    string removeStars(string s) {
        string answer;
        for(char x:s){
            if(x=='*') answer.pop_back();
            else answer.push_back(x);
        }
        return answer;
    }
};
