class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        if(n==0) return a;
        else if(n==1) return b;
        else if(n==2) return c;

            n-=3;
            int d=a+b+c;
            while(n--){
                a=b;
                b=c;
                c=d;
                d=a+b+c;
            }
            return d;

    }
};
