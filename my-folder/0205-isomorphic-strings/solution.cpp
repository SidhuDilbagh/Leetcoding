class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;        
        int j=1;
        for(char c:s){
            if(!m1[c]){
                m1[c]=j;
                j++;
            }
        }
        j=1;
        for(char c:t){
            if(!m2[c]){
                m2[c]=j;
                j++;
            }
        }
        unsigned long long n1=0,n2=0;
        for(char m:s){
            n1=n1*10+m1.find(m)->second;
        }
        for(char m:t){
            n2=n2*10+m2.find(m)->second;
        }
        if(n1!=n2) return false;
        return true;
    }
};
