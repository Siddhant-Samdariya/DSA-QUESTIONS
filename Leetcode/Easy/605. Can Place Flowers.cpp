#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int one = 0;
        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 0)
                n--;
            return n <= 0;
        }

        if (flowerbed.size() == 2) {
            if (flowerbed[0] == 0 && flowerbed[1] == 0)
                n--;
            return n <= 0;
        } else {
            if (flowerbed[0] == 0 && flowerbed[1] == 0) {
                flowerbed[0] = 1;
                n--;
            }
            if (flowerbed[flowerbed.size() - 1] == 0 &&
                flowerbed[flowerbed.size() - 2] == 0) {
                flowerbed[flowerbed.size() - 1] = 1;
                n--;
            }
            for (int i = 1; i < flowerbed.size() - 1; i++) {
                if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 &&
                    flowerbed[i] != 1) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};

int main(){
    
    return 0;
}