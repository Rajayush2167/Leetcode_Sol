#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        if (target <= nums[0]) return 0;
        for (size_t i = 1; i < nums.size(); i++) {
            if (target == nums[i]) return i;
            if (target > nums[i - 1] && target < nums[i]) return i;
        }
        return nums.size();
    }
};

