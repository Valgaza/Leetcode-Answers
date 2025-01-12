// Problem: Top K Frequent Elements
/* Thought of HashMaps and other approaches, but finally fixated on a 2D array, with the first column being the 
   frequencies and second one being the number who's frequency is being counted, then the array is sorted based 
   on the frequencies and depending on what k is we print the top k frequencies. */

import java.util.Arrays;

class Q347 {
    public int[] topKFrequent(int[] nums, int k) {
        Arrays.sort(nums);

        int[][] array = new int[nums.length][2];
        int[] soln = new int[k];

        int index = 0;
        array[0][1] = nums[0];
        array[0][0] = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]) {
                array[index][0]++;
            } else {
                index++;
                array[index][1] = nums[i];
                array[index][0] = 1;
            }
        }

        Arrays.sort(array, (a, b) -> Integer.compare(b[0], a[0]));

        for (int j = 0; j < k; j++) {
            soln[j] = array[j][1];
        }

        return soln;
    }
}
