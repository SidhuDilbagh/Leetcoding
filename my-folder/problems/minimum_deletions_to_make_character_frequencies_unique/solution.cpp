class Solution {
public:
    int minDeletions(string s) 
    {
        int count=0;
        int n=s.length();
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        map<int,int> m;
        for(auto i:mp)
        {
            m[i.second]++;
        }
        for (auto i = m.rbegin(); i != m.rend(); i++)
        {
            if(i->second>1 && i->first>0)
            {
                m[i->first-1]+=i->second-1;
                count+=i->second-1;

            }
        }
        return count;
    }
};