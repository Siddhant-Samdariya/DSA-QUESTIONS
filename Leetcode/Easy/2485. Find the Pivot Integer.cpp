#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0,sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        int sumog = sum;
        for (int i = 1; i <= n; i++) {
            sum = sumog;
            sum1 += i;
            sum = sumog - sum1;
            if (sum + i == sum1)
                return i;
        }
        return -1;
    }
};

int main(){
    
    return 0;
}