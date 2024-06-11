class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> answer;
        unordered_map<int,int> count;
        for(int x:arr1) count[x]++;
        for(int x:arr2){
            int rep=count[x];
            while(rep--) answer.push_back(x);
            count[x]=NULL;
        }
        int i=answer.size();
        for(auto x:count){
            int rep=x.second;
            while(rep--) answer.push_back(x.first);
        }
        sort(answer.begin()+i,answer.end());
        return answer;
    }
};
