class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int answer=0;
        int sum=0;
        for(int x:gain){
            sum+=x;
            answer=max(sum,answer);
        }
        return answer;
    }
};
