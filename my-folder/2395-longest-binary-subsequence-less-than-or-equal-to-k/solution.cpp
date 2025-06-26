class Solution {
    string convert(int k){
        string ans="";
        while(k){
            if(k%2){
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }
            k/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    int longestSubsequence(string s, int k) {
        int num=0;
        int pos=0;
        int count=0;
        int bits = 32 - __builtin_clz(k);
        for(int i=s.size()-1;i>=0;i--,pos++){
            if(s[i]=='0'){
                count++;
            } else {
                if(pos<=bits && num+(1<<pos) <= k){
                    num+=1<<pos;
                    count++;
                }
            }
        }
        return count;
    }
};
