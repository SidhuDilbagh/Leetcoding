class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int answer=0;
        int n=size(timeSeries);
        for(int i=0;i<n;i++){
            if(i<n-1 && timeSeries[i]+duration-1>=timeSeries[i+1]) answer+=timeSeries[i+1]-timeSeries[i];
            else answer+=duration;
        }
        return answer;
    }
};
