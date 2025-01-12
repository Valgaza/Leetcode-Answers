// Problem: Group Anagrams
/* Made a HashMap, iterated over the original string array, sorted each string as a character array, if the 
*  sorted string matched an existing key in the HashMap then added the original string into the list corresponding
*  to that key. To put all this into context my hashmap had the keys as sorted string, and the values as a list of 
*  strings which when sorted into a characterr array matched the key.
*/

import java.util.*;

class Q49 {
    public List<List<String>> groupAnagrams(String[] strs) {
        
        Map<String, List<String>> map = new HashMap<>();

        for (int i = 0; i < strs.length; i++) {

            String s = strs[i];
            char array[] = s.toCharArray();
            Arrays.sort(array);
            s = new String(array);

            if (map.containsKey(s)) {
                map.get(s).add(strs[i]);
            } else {
                map.put(s, new ArrayList<>());
                map.get(s).add(strs[i]);
            }
        }

        return new ArrayList<>(map.values());
    }
}
