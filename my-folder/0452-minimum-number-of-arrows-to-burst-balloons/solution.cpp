class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        sort(points.begin(),points.end(),[](auto &a , auto &b){return a[1]<b[1];});
        int end=points[0][1];
        int n=size(points);
        for(int i=0;i<n;i++){
            if(end<points[i][0]){
                count++;
                end=points[i][1];
            }
        }
        return count;
    }
};
