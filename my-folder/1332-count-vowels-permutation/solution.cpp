class Solution {
public:
    int countVowelPermutation(int n) {
        long int a=1,e=1,i=1,o=1,u=1;
        long int a0,e0,i0,o0,u0;

        for(int z=1;z<n;z++)
        {
            a0=(e+i+u)%1000000007;
            e0=(a+i)%1000000007;
            i0=(e+o)%1000000007;
            o0=(i)%1000000007;
            u0=(i+o)%1000000007;

            a=a0;
            e=e0;
            i=i0;
            o=o0;
            u=u0;
        }
        int count=(a+e+i+o+u)%1000000007;
        return count;
    }
};
