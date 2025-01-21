// Problem: Valid Palindrome
// Took longer than I should've because of sily errors, straight forward question, firstly converted to lower case, 
// wrote a loop which removes the alpha numeric characters, and then another loop to check if its a palindrome by checking
// the first and last element in a loop for length/2 iterations.

class Q125 {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        char array[] = s.toCharArray();
        char array1[] = new char[array.length]; 
        int count = 0;

        for(int i = 0; i < array.length; i++){
            if((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= '0' && array[i] <= '9')){
                array1[count] = array[i];
                count++;
            }
            else{
                continue;
            }
        }

        for(int i = 0; i < (count/2); i++){
            if(array1[i] != array1[count - i - 1]){
                return false;
            }
        }

        return true;
    }
}