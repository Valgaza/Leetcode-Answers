// Problem: Contains Dupilcate
// Sorted the array and checked if any number appears consecutively.

import java.util.*;

public class Q217 {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
}