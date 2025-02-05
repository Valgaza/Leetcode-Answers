// Problem: Daily Temperatures
// This solution uses a monotonic decreasing stack to efficiently track temperatures. We iterate over the array, pushing 
// each day's temperature and index onto the stack. If a warmer day is found, we pop from the stack and compute the waiting 
// days for that cooler day. Since each element is pushed and popped at most once, the approach runs in O(n) time complexity.

import java.util.*;

public class Q739 {
    public int[] dailyTemperatures(int[] temperatures) {
        int[] res = new int[temperatures.length];
        Stack<int[]> stack = new Stack<>();

        for (int i = 0; i < temperatures.length; i++) {
            int t = temperatures[i];
            while (!stack.isEmpty() && t > stack.peek()[0]) {
                int[] pair = stack.pop();
                res[pair[1]] = i - pair[1];
            }
            stack.push(new int[]{t, i});
        }
        return res;
    }
}