// Problem: Two Sum II - Input Array Is Sorted
// Very straight forward question, knew since the beginning that two pointers will be the go to solution.

class Q167 {
    public int[] twoSum(int[] numbers, int target) {      
        int a = 0;
        int b = numbers.length - 1;
        for(int i = 0; i < numbers.length; i++){

            if(numbers[a] + numbers[b] == target){
                return new int[] {(a+1), (b+1)};
            }
            else if(numbers[a] + numbers[b] < target){
                a++;
            }
            else{
                b--;
            }
        }
        return new int[] {}; 
    }
}