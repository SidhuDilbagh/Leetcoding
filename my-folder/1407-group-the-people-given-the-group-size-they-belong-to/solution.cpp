class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        vector<vector<int>> v;
        map<int,vector<int>> m;
        for(int i=0;i<groupSizes.size();i++)
        {
            map<int,vector<int>>::iterator itr=m.find(groupSizes[i]);
            if(itr==m.end())
            {
                vector<int> v1;
                v1.push_back(i);
                m[groupSizes[i]]=v1;
            }
            else if((itr->second).size()==groupSizes[i])
            {
                v.push_back(itr->second);
                (itr->second).clear();
                (itr->second).push_back(i);
            }
            else
            {
                (itr->second).push_back(i);
            }
        }
        for(auto i:m)
        {
            v.push_back(i.second);
        }
        return v;
    }
};
