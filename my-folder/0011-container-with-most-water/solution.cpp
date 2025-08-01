class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxWater=0;
        while(left<=right){
            maxWater=max(min(height[left],height[right])*(right-left),maxWater);
            if(height[left]<height[right]){
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};
