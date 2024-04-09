class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){return a[1]<b[1];});
        int count=1;
        int end=intervals[0][1];
        int n=size(intervals);
        for(int i=1;i<n;i++){
            if(end<=intervals[i][0]){
                count++;
                end=intervals[i][1];
            }
        }
        return n-count;
    }
};
