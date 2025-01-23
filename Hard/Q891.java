//Problem: Sum of Subsequence Widths
// Sat on the problem for many many days, had realised cant sit and compute every sequence and then calculate width as that
// would be too long, but today while conversing with a friend got hinted towards a different approach and managed to make
// a solution out of it.

import java.util.*;

class Q891 {
    public int sumSubseqWidths(int[] nums) {
        Arrays.sort(nums);

        long limiter = (long)1e9 + 7;
        long p = 1;
        long soln = 0; 

        for (int i = 0; i < nums.length; ++i){
            soln = (soln + nums[i] * p - nums[nums.length - 1 - i] * p) % limiter;
            p = p * 2 % limiter;
        }
        return (int)((soln + limiter) % limiter);
    }
}