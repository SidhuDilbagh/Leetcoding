class Solution {
public:
    int maxScore(string s) {
        int lft=0,rgt=0,one=0,max=-501;
        string::iterator itr;
        for(itr=s.begin();itr!=s.end();itr++)
        {
            if(*itr=='1'){
                rgt--;
                one++;
            }
            else{
                lft++;
            }
            if(max<(lft+rgt)){
                max=lft+rgt;
                if(itr==s.end()-1){
                    max--;
                }
            }
        }
        return max+one;
    }
};
