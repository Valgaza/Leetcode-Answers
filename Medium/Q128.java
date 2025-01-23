// Problem: Longest Consecutive Sequence
// Took quite some time to think of a solution, eventually got it but the time and space complexity isnt too great.
// I am adding all the elements to a hashset to make the retrieval time O(1), then checking if an element has its next 
// consecutive element in the set, if yes then running a while loop to count how many of them are in the set, technically 
// this is O(n^2) time complexity but I couldnt think of a solution which would do it in O(n), this solution is also slightly
// inspired by one that ChatGpt suggested while I was asking it to solve a doubt for me (Obviosly the doubt was not directly
// related to the question or to the logic).

import java.util.HashSet;

class Q128 {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> hset = new HashSet<>();
        
        for(int n : nums) {
            hset.add(n);
        }
        
        int best = 0;

        for(int n : hset) {
            if(!hset.contains(n - 1)) {
                int m = n + 1;
                while(hset.contains(m)) {
                    m++;
                }
                best = Math.max(best, m - n);
            }
        }
        return best;
    }
}
