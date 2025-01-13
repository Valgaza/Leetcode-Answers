// Problem: Product of Array Except Self
/* Took time to think of solution, eventually through hints realised that had to maintain two arrays prefix and suffix
 * to maintain exactly what the name suggests. Then going through other more efficient solutions observed that I could
 * eliminate one of the two arrays and just calculate one, first add all the prefixes, then the suffixes.
*/

class Q238 {
    public int[] productExceptSelf(int[] nums) {
        int[] ans = new int[nums.length];

        ans[0] = 1;
        for (int i = 1; i < nums.length; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int i = nums.length - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }

        return ans;
    }
}
