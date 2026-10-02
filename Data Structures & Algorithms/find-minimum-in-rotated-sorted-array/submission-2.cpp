class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > nums[r]) {
                // Minimum right side me hai
                l = mid + 1;
            } 
            else {
                // Minimum mid ya left side me hai
                r = mid;
            }
        }

        return nums[l];
    }
};