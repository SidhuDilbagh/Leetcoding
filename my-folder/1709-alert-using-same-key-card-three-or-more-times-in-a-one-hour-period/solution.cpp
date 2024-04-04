class Solution {
public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        vector<pair<string,int>> vec;
        vector<string> answer;
        
        int n=size(keyName);
        for(int i=0;i<n;i++){
            vec.push_back(make_pair(keyName[i],60 * stoi(keyTime[i].substr(0, 2)) + stoi(keyTime[i].substr(3))));
        }

        sort(vec.begin(),vec.end());

        if(n>2){
            int i=0,j=2;
            while(j<n){
                if(vec[i].first==vec[j].first && vec[j].second-vec[i].second <=60) {
                    answer.push_back(vec[i].first);
                    while(vec[i].first==vec[j].first && j<n){
                        i++;
                        j++;
                    }   
                }
                i++;
                j++;
            }
        }

        return answer;
    }
};
