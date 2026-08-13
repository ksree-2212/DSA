class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;  // total flowers placed
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                int left = (i == 0) ? 0 : flowerbed[i - 1];
                int right = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1];
                
                if (left == 0 && right == 0) {
                    flowerbed[i] = 1;  // place flower
                    count++;
                }
            }
        }
        return count >= n;
    }
};
