class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n){
            if(n%2) count++;
            n/=2;
        }
        return count;
    }
};
