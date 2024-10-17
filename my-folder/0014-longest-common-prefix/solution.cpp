class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        for(int i=0;i<strs[0].size();i++){
            int temp=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j].size()==i || strs[j][i]!=temp){
                    return prefix;
                }
            }
            prefix.push_back(temp);
        }
        return prefix;
    }
};
