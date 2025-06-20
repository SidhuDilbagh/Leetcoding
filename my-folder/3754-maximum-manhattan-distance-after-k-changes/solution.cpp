class Solution {
public:
    int maxDistance(string s, int k) {
        unordered_map<char,int> mp{{'E',0},{'N',0},{'W',0},{'S',0}};
        int currMax=0;
        for(char c:s){
            mp[c]++;
            int k_=k;
            int possible= abs(mp['N']-mp['S']) + 2*min(k_,min(mp['N'],mp['S']));
            k_-=min(k_,min(mp['N'],mp['S']));
            possible+=abs(mp['E']-mp['W']) + 2*min(k_,min(mp['E'],mp['W']));
            currMax=max(currMax,possible);
        }
        return currMax;
    }
};
