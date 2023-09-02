class Solution {
public:
    bool checkStrings(string s1, string s2) 
    {
        int n=s1.length();
    for(int j=0;j<2;j++)
    {
        int temp1[26]={0},temp2[26]={0};
    for(int i=j;i<n;i+=2)
    {
        int t1=s1[i]-97,t2=s2[i]-97;
        temp1[t1]++;
        temp2[t2]++;
    }
        for(int i=0;i<26;i++)
            if(temp1[i]!=temp2[i])
                return false;
    }
    return true;
    }
};