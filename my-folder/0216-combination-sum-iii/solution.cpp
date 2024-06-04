class Solution {
    vector<vector<int>> answer;
    vector<int> test;
    void find(int k,int n,int current){
        if(!k){
            if(!n){
                answer.push_back(test);
            }
        }
        else if(n<0 || current>9){
            return;
        }
        else{
            test.push_back(current);
            find(k-1,n-current,current+1);
            test.pop_back();
            find(k,n,current+1);
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        find(k,n,1);
        return answer;
    }
};
