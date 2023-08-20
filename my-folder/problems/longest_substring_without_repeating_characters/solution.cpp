class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
    unordered_map<int,int>m;
    int max=0;
    int count=0;
    int clash=-1;
    int n=s.length();

    for(int i=0;i<n;i++)
    {
        int temp=s[i];
        auto itr=m.find(temp);
        if (itr != m.end())
        {
            auto t=itr->second;
            if(clash<t)
            clash=t;
            m[temp]=i;
            count=i-clash;
            cout<<count; 
        }
        else
        {
            m[temp]=i;
            count++;
            cout<<count;
        }

        if(max<count)
        max=count;
    }
    return max;
    }
};