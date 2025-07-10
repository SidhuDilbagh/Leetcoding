class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_map<char,int> m;
        int longest=0;
        while(j<s.size()){
            if(m.count(s[j])){
                i=max(i,m[s[j]]+1);
            }
            m[s[j]]=j;
            longest=max(longest,j-i+1);
            j++;
        }
        return longest;
    }
};
