class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int> mp;
        int n=size(score);
        for(int i=0;i<n;i++){
            mp.insert({score[i],i});
        }
        vector<string> answer(n);
        int i=n;
        for(auto ele:mp){
            if(i==1) answer[ele.second]="Gold Medal";
            else if(i==2) answer[ele.second]="Silver Medal";
            else if(i==3) answer[ele.second]="Bronze Medal";
            else answer[ele.second]=to_string(i);
            i--;
        }
        return answer;
    }
};
