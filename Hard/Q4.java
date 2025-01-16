// Problem: Median of Two Sorted Arrays
// Was made to solve this as a part of my college's competitive programming course, managed to solve it in O(n) but the 
// the most optimal solution is in Q(log n) time, so will update if I ever manage to solve it in that time.

class Q4 {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length, m = nums2.length;
        int[] merged = new int[n + m];
        int i = 0, j = 0;


        for (int k = 0; k < (n + m); k++) {
            if (j >= m || (i < n && nums1[i] <= nums2[j])) {
                merged[k] = nums1[i++];
            } else {
                merged[k] = nums2[j++];
            }
        }
        
        int total = n + m;
        if (total % 2 == 1) {
            return merged[total / 2];
        } else {
            int mid1 = merged[(total / 2) - 1];
            int mid2 = merged[total / 2];
            return (mid1 + mid2) / 2.0;
        }
    }
}
