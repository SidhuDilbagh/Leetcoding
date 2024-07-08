class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        int start=intervals[0][0],end=intervals[0][1],n=intervals.size();
        for(int i=0;i<n;i++){
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
            }
            else{
                answer.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        answer.push_back({start,end});
        return answer;
    }
};
