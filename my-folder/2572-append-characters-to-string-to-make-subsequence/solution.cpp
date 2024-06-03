class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,n=t.size();
        for(char x:s){
            if(x==t[i]){
                i++;
            }
            if(i==n) return 0;
        }
        return n-i;
    }
};
