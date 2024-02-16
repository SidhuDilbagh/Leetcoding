class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int> count;
        count.push_back(1);
        int i=0,n=arr.size();
        for(int j=1;j<n;j++){
            if(arr[j]==arr[j-1]){
                count[i]++;
            }
            else{
                count.push_back(1);
                i++;
            }
        }
        sort(count.begin(),count.end());
        i=0;
        n=count.size();
        while(k && i<n){
            k-=count[i];
            if(k<0) return n-i;
            i++;
        }
        return n-i;
    }
};
