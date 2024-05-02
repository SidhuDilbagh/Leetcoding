class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=size(flowerbed)-2;
        if(s==-1){
            if(!n) return true;
            else if(n==1 & !flowerbed[0]) return true;
            else return false;
        }
        if(!flowerbed[0] && !flowerbed[1]) {
            n--;
            flowerbed[0]=1;
        }
        for(int i=1;i<s;i++) if(!flowerbed[i-1] && !flowerbed[i] && !flowerbed[i+1]){
            n--;
            flowerbed[i]=1;
        }
        if(!flowerbed[s] && !flowerbed[s+1]) n--;
        return n<1?1:0;
    }
};
