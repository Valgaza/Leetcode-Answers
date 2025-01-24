// Problem: Container With Most Water
// Thought of various solutions for a long time without realising that the easiest way was the actual solution, learned not
// to oveer complicate problem and start out with the most obvious solution first.

class Q11 {
    public int maxArea(int[] height) {
        int a = 0;
        int b = height.length - 1;
        int maxArea = 0;

        while (a < b) {
            int currentArea = Math.min(height[a], height[b]) * (b - a);
            maxArea = Math.max(maxArea, currentArea);

            if (height[a] < height[b]) {
                a++;
            } else {
                b--;
            }
        }
        return maxArea;
    }
}
