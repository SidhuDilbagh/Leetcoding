class Solution {
    bool check(int x,vector<int>& position,int m){
        int n=position.size();
        int prev=position[0],placed=1;
        for(int i=1;i<n && placed<m;i++){
            if(position[i]-prev>=x){
                placed++;
                prev=position[i];
            }
        }
        return placed==m;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=1,end=ceil(position[position.size() - 1] / (m - 1.0)),mid,answer=0;
        while(start<=end){
            cout<<start<<end<<endl;
            mid=start+(end-start)/2;
            if(check(mid,position,m)){
                answer=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return answer;
    }
};
