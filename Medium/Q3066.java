// Problem: Minimum Operations to Exceed Threshold Value II
// 

import java.util.*;

class Solution{
    public int minOperations(int[] nums, int k){
        PriorityQueue<Long> sortedList = new PriorityQueue<>();
        for(int num : nums){
            sortedList.add((long) num);
        }

        int operations = 0;
        while(sortedList.size() > 1 && sortedList.peek() < k){
            long x = sortedList.poll();
            long y = sortedList.poll();

            long newValue = 2 * Math.min(x, y) + Math.max(x,y);    

            sortedList.add(newValue);

            operations++;
        }
        return operations;
    }
}