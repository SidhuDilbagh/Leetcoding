class Solution {
        // vector<int> parent(n);
        int parent(int x, vector<int> &set){
            if(set[x]<0) return x;
            set[x] = parent(set[x],set);
            return set[x];
        }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int sze=connections.size();
        if(sze<n-1) return -1;
        // for(int i=0;i<n;i++){
        //     parent[i]=i;
        // }
        vector<int> set(n,-1);
        for(int i=0;i<sze;i++){
            // cout<<i<<endl;
            int p1=connections[i][0],p2=connections[i][1];
            p1=parent(p1,set);p2=parent(p2,set);
            if(p1!=p2){
                // cout<<"here";
                if(set[p1]>set[p2]){
                    set[p2]+=set[p1];
                    set[p1]=p2;
                }
                else{
                    set[p1]+=set[p2];
                    set[p2]=p1;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(set[i]<0){
                count++;
            }
        }
        return count-1;
    }
};
