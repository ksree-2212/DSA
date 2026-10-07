#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for (int c : candies) {
            if (c > maxCandies) maxCandies = c;
        }
        vector<bool> result;
        for (int c : candies) {
            result.push_back(c + extraCandies >= maxCandies);
        }
        return result;
    }
};
