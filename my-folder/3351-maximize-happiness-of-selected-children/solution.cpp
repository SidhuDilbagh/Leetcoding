class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long answer=0;
        for(int i=size(happiness)-1,z=0;z<k;z++,i--){
            answer+=max(0,happiness[i]-z);
        }
        return answer;
    }
};
