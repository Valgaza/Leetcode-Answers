// Problem: Count Number of Bad Pairs
// Find i - nums[i] for each number and add it to hashmap and maintain a count of good pairs by doing so, subtract number
// of good pairs from total number of pairs and viola.

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> countMap;

        long long totalPairs = 0;
        long long goodPairs = 0;
        
        int n = nums.size();
        
        for (int j = 0; j < n; ++j) {
            int key = j - nums[j];
            if (countMap.find(key) != countMap.end()) {
                goodPairs += countMap[key];
            }
            countMap[key]++;
        }

        totalPairs = (long long)n * (n - 1) / 2;
        return totalPairs - goodPairs;
    }
};