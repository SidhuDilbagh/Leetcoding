class Solution {
private:
    int expand(int start,int end,string s){
        int count =0;
        int n=s.length();
        while(start>=0 && end<=n && s[start]==s[end]){
            start--;
            end++;
            count++;
        }
        return count;
    }
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count=0;
        for(int i=0;i<n;i++){
            count+= expand(i,i,s);
            count+=expand(i,i+1,s);
        }
        return count;
    }
};
// Using expand around center
