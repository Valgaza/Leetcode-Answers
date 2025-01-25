// Problem: Trapping Rain Water
// I had been thinking about this problem for too long, I was overcomplicating the solution too much, same mistake that
// I made in Q11. Lesson: Before you go bonkers with crazy solutions just think of the simplest possible way out. 
// In this question the simplest way out was to calculate the water retained for every element of the array one by one
// and no fancy shenanigans.

class Q42 {
    public int trap(int[] height) {
        if (height.length == 0) return 0;

        int[] premax = new int[height.length];
        int[] sufmax = new int[height.length];

        int trapped = 0;
        int n = height.length - 1;

        premax[0] = height[0];
        sufmax[n] = height[n];

        for (int i = 1; i < n + 1; i++) {
            premax[i] = Math.max(premax[i - 1], height[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            sufmax[i] = Math.max(sufmax[i + 1], height[i]);
        }

        for (int i = 0; i < n + 1; i++) {
            trapped += Math.min(premax[i], sufmax[i]) - height[i];
        }

        return trapped;
    }
}
