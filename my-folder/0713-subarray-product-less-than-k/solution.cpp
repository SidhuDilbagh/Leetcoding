class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int num = 0;
        int n = size(nums);
        int product = 1;
        for (int i = 0, j = 0; j < n; j++) {
            product *= nums[j];
            while (product >= k && i < n && i<=j) {
                product /= nums[i];
                i++;
            }
            if (product < k)
                num += j - i + 1;
        }
        return num;
    }
};
