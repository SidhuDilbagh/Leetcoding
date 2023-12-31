class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int firstOccurence[26];
        for(int i=0;i<26;i++){
            firstOccurence[i]=-1;
        }
        int ans=-1,n=s.length();
        for(int i=0;i<n;i++){
            if(firstOccurence[s[i]-97]==-1){
                firstOccurence[s[i]-97]=i;
            }
            else if((i-firstOccurence[s[i]-97]-1)>ans){
                ans=i-firstOccurence[s[i]-97]-1;
            }
        }
        return ans;
    }
};
