class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.length();
        int minTime=0,temp=0;
        for(int i=1;i<n;i++){
            if(colors[i]==colors[i-1]){
                if(!temp){
                    minTime+=min(neededTime[i],neededTime[i-1]);
                    temp=max(neededTime[i],neededTime[i-1]);
                }
                else{
                    minTime+=min(temp,neededTime[i]);
                    temp=max(temp,neededTime[i]);
                }
            }
            else if(temp){
                temp=0;
            }
        }
        return minTime;
    }
};
