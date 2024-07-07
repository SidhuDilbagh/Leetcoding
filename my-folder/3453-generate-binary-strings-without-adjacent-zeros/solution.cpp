class Solution {
    vector<string> answer;
    void create(string &test,int &n,bool last){
        if(n==test.size()){answer.push_back(test);}
        else if(n>test.size()){
            if(last){
                test.push_back('0');
                create(test,n,0);
                test.pop_back();
            }
            test.push_back('1');
            create(test,n,1);
            test.pop_back();
        }
    }
public:
    vector<string> validStrings(int n) {
        string test="";
        create(test,n,1);
        return answer;
    }
};
