class Solution {
    int atonum(char c)
    {
        int x;
        if(c=='I')
            x=1;
        else if(c=='V')
            x=5;
        else if(c=='X')
            x=10;
        else if(c=='L')
            x=50;
        else if(c=='C')
            x=100;
        else if(c=='D')
            x=500;
        else if(c=='M')
            x=1000;
        return x;
    }
public:
    int num=0;
    int romanToInt(string s) 
    {
        for(int i=0;i<size(s);i++)
        {
            if(atonum(s[i])>=atonum(s[i+1]))
                num=num+atonum(s[i]);
            else
                num=num-atonum(s[i]);
        }
        return num;
    }
};