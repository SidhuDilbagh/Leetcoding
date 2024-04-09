class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i=0,j=0;
        int n=size(firstList),m=size(secondList);
        vector<vector<int>> answer;
        while(i<n && j<m){
            int s=max(firstList[i][0],secondList[j][0]);
            int e=min(firstList[i][1],secondList[j][1]);
            if(s<=e) answer.push_back({s,e});
            if(firstList[i][1]>secondList[j][1]) j++;
            else if(secondList[j][1]>firstList[i][1]) i++;
            else{
                i++;
                j++;
            }
        }
        return answer;
    }
};
