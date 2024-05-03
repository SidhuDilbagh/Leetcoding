class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=size(version1);
        int m=size(version2);
        int i=0,j=0;
        while(1){
            int v1=0;
            while(i<n && version1[i]!='.'){
                v1=v1*10+(version1[i]-'0');
                i++;
            }
            i++;
            int v2=0;
            while(j<m && version2[j]!='.'){
                v2=v2*10+(version2[j]-'0');
                j++;
            }
            j++;
            if(v1>v2) return 1;
            else if(v1<v2) return -1;
            if(i>=n && j>=m) break;
        }
        return 0;
    }
};
