class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        for(int x:arr){
            m[x]++;
        }
        for(auto it=m.rbegin();it!=m.rend();it++){
            if(it->first==it->second){
                return it->first;
            }
        }
        return -1;
    }
};
