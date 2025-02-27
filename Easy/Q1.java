// Problem: Two Sum
// Initially deviced a brute force solution, on learning about HashMaps modified my solutiion to be more efficient.

import java.util.HashMap;
import java.util.Map;

public class Q1 {
        public int[] twoSum(int[] nums, int target) {
            Map<Integer, Integer> map = new HashMap<>();
    
            for (int i = 0; i < nums.length; i++) {
                int diff = target - nums[i];
    
                if (map.containsKey(diff)) {
                    return new int[] {map.get(diff), i};
                }
                map.put(nums[i], i);
            }
    
            return new int[] {};
        }
    }
