// Problem: Minimum Number of Coins to be Added
// Initial approach was to sort the vector and then loop over it once and maintaing a variable which maintains the sum of
// all elements I have encountered so far, if it is greater than or equal to an element I am encountering then do nothing
// but if it is less than the element I am currently encountering then add count to count and incremenet the return variable.

#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    int minimumAddedCoins(vector<int>& coins, int target){
        
        sort(coins.begin(), coins.end()); 

        int count = 1;
        int i = 0; 
        int added = 0;
        int n = coins.size() - 1;
    
        while(target >= count){

            if(i <= n && count >= coins[i]){
                count = count + coins[i];
                i++;
            } 
            
            else{
                count = count + count;
                added++;
            }
        }

        return added;
    }
};
