class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        int ptr,i=0;
        int n=s.size();
        while(!s[i]){
            i++;
            if(i==n){
                return 0;
            }
        }
        ptr=i;
        while(ptr<n){
            if(s[ptr]=='0'){
                ans+=ptr-i;
                i++;
            }
            ptr++;
        }
        return ans;
    }
};
