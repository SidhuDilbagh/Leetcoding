class Solution {
public:
    int scoreOfString(string s) {
        int answer=0;
        int a=s[0];
        for(int x:s){
            answer+=abs(a-x);
            a=x;
        }
        return answer;
    }
};
