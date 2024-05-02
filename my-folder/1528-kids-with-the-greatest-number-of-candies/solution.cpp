class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=size(candies);
        vector<bool> answer(n,0);
        int greatest=-1;
        for(int i=0;i<n;i++) greatest=max(candies[i],greatest);
        for(int i=0;i<n;i++) if(candies[i]+extraCandies >= greatest) answer[i]=true;
        return answer;
    }
};
