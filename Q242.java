import java.util.Arrays;

public class Q242 {
    public boolean isAnagram(String s, String t) {
        
            char array[] = s.toCharArray();
            char array1[] = t.toCharArray();

            Arrays.sort(array);
            Arrays.sort(array1);
            
            s = new String(array);
            t = new String(array1);

        return s.equals(t);
    } 
}
