class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0;i<s.size();i+=k){
            if(i+k<=s.size()){
                ans.push_back(s.substr(i,k));
            } else {
                string temp=s.substr(i);
                while(temp.size()!=k){
                    temp.push_back(fill);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
