class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stck;
        int n=size(s);
        for(int i=0;i<n;i++){
            if(stck.empty()) stck.push(make_pair(s[i],1));
            else{
                pair<char,int> p=stck.top();
                if(p.first!=s[i]) stck.push(make_pair(s[i],1));
                else{
                    stck.pop();
                    if(++p.second!=k) stck.push(p);
                }
            }
        }
        string answer;
        while(!stck.empty()) {
            for(int j=0;j<stck.top().second;j++) answer.push_back(stck.top().first);
            stck.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
