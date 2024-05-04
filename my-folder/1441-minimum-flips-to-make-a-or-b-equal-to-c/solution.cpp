class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        while(a || b || c){
            cout<<c%2<<a%2<<b%2<<endl;
            if(c%2==1 && a%2==0 && b%2==0) count++;
            else if(c%2==0){
                if(a%2==1 && b%2==1) count+=2;
                else if(a%2==1 || b%2==1) count++;
            }
            a/=2;
            b/=2;
            c/=2;
        }
        return count;
    }
};
