class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {

            int mid = low + (high - low) / 2; // Calculate the mid index

            // Check if the mid element is the target
            if (nums[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) { // Check if the target is in the left half
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else { // The right half must be sorted
                if (nums[mid] <= target && target <= nums[high]) { // Check if the target is in the right half
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        
        return -1;
    }
};

