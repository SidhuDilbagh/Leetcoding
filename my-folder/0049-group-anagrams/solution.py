class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ans=[]
        myMap={}
        for i in strs:
            flag=1
            temp=sorted(i)
            for j in ans:
                if temp==j[0]:
                    flag=0
                    j.append(i)
                    break
            if flag:
                ans.append([temp,i])
        for i in ans:
            i.pop(0)
        return ans
