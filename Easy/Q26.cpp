// Problem: Remove Duplicates from Sorted Array
// Two pointer approach to check if duplicate elements exist, if they do then to increment i, constant space complexity.

#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++; 
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
