class Solution {
private:
    vector<vector<string>> answer; 
    int _n;
    void solve(vector<int> &test){
        if(size(test)==_n) {
            vector<string> ans;
            for(int i=0;i<_n;i++){
                string s=string(_n,'.');
                s[test[i]]='Q';
                ans.push_back(s);
            }
            answer.push_back(ans);
        }
        else{
            for(int i=0;i<_n;i++){
                int s= size(test);
                bool check=1;
                for(int z=0;z<s;z++){
                    if(test[z]==i || s-z==i-test[z] || s-z==+test[z]-i){
                        check=0;
                        break;
                    }
                }
                if(check){
                    test.push_back(i);
                    solve(test);
                    test.pop_back();
                }
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int> test;
        _n=n;
        solve(test);
        return answer;
    }
};
