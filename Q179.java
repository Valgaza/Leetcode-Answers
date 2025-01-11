import java.util.*;

class Solution {
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
