// Problem: Pow(x, n)
// Easy solution, small catch of taking reciprocal of number if exponent negative, something I'm glad I could think of at the 
// right time.

class Solution {
    public double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        long exponent = n;
        if (exponent < 0) {
            x = 1 / x;
            exponent = -exponent;
        }
        double result = 1.0;
        double currentProduct = x;
        while (exponent > 0) {
            if ((exponent & 1) == 1) {
                result *= currentProduct;
            }
            currentProduct *= currentProduct;
            exponent >>= 1;
        }
        return result;
    }
}
