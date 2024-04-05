class Solution {
private:
    int count=0;
    int _n;
    void solve(vector<int> &test){
        if(size(test)==_n) {
            count++;
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
    int totalNQueens(int n) {
        vector<int> test;
        _n=n;
        solve(test);
        return count;
    }
};
