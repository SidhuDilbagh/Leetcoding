class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        points.sort()
        max =0
        temp=points[0]
        for i in points:
            if (i[0]-temp[0])>max:
                max=i[0]-temp[0]
            temp=i
        return max
        