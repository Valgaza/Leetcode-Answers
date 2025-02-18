// Problem: Car Fleet
// Added the cars into a 2D array which stored the time taken by each car to reach the target, then by using a stack 
// checked if a consecutive car is taking less time than the one on the top of the stack, not a completely original 
// solution, was assisted by a classmate.

import java.util.*;

class Q853 {
    public int carFleet(int target, int[] position, int[] speed) {
        int n = position.length;
        if (n == 0) return 0;

        double[][] cars = new double[n][2];

        for (int i = 0; i < n; i++) {
            cars[i][0] = position[i];
            cars[i][1] = (double) (target - position[i]) / speed[i];
        }

        Arrays.sort(cars, (a, b) -> Double.compare(b[0], a[0]));

        Stack<Double> stack = new Stack<>();

        for (double[] car : cars) {
            double time = car[1];

            if (stack.isEmpty() || time > stack.peek()) {
                stack.push(time);
            }
        }

        return stack.size();
    }
}
