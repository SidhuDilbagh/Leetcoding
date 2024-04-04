class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        bool depth=0;
        for(char x:seq){
            if(x=='('){
                depth=!depth;
                if(depth) ans.push_back(1);
                else ans.push_back(0);
            }
            else if(x==')'){
                if(depth) ans.push_back(1);
                else ans.push_back(0);
                depth=!depth;
            }
        }
        return ans;
    }
};
