class Solution:
    def minSteps(self, s: str, t: str) -> int:
        count=[0]*26
        ans=0
        for i in range(len(s)):
            count[ord(s[i])-97]+=1
            count[ord(t[i])-97]-=1
        for i in count:
            ans+=abs(i)
        return ans//2
