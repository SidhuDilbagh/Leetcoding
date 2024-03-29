class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        while(i<j && s[i]==s[j]){
            while(i<j && s[i]==s[i+1]) i++;
            while(i<j && s[j]==s[j-1]) j--;
            i++;
            j--;
        }
        return max(j-i+1,0);
    }
};
