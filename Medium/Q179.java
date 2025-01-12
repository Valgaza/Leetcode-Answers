//Problem: Largest Number (Had help from a more experienced friend)
/* Converted the array of numbers to list of strings , custom sorted the list using .sort(), and then using the 
 * string builder class combined them all into one. */

import java.util.*;

class Q179 {
    public String largestNumber(int[] nums) {
        List<String> word = new ArrayList<>();
        for (int num : nums) {
            word.add(String.valueOf(num));
        }

        Collections.sort(word, (a, b) -> (b + a).compareTo(a + b));

        StringBuilder res = new StringBuilder();
        for (String str : word) {
            res.append(str);
        }

        if (res.charAt(0) == '0') {
            return "0";
        }

        return res.toString();
    }
}
