class Solution {
public:
    int firstUniqChar(string s) {
        int check[26]={0};
        int n=s.length();
        for(int i=0;i<n;i++){
            check[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(check[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
