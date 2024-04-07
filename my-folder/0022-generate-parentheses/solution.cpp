class Solution {
    int n;
    vector<string>result;
public:
    void helper(int open,int close,string current)
    {
        if(current.length()==n*2)
        {
            result.push_back(current);
            return;
        }
        if(open<n)  helper(open+1,close,current+"(");
        if(close<open)  helper(open,close+1,current+")");
    }
    vector<string> generateParenthesis(int n) {
        Solution::n=n;
        helper(0,0,"");
        return result;
    }
};
