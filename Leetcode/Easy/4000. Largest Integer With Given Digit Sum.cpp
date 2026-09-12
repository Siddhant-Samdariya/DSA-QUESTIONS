#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestInteger(int n, int s) {
        string x = "9", y = "99", z = "999", w = "9999", t = "99999";
        int r = 0, ans = -1, p = 0;
        if (x.size() == n) {
            p = stoi(x);
            r = -1;
        } else if (y.size() == n) {
            p = stoi(y);
            r = 9;
        } else if (z.size() == n) {
            p = stoi(z);
            r = 99;
        } else if (w.size() == n) {
            p = stoi(w);
            r = 999;
        } else {
            p = stoi(t);
            r = 9999;
        }
        int sum = 0;
        while (p >= -1) {
            int f = p;
            while (f > 0) {
                int digit = f % 10;
                sum += digit;
                f /= 10;
            }
            if (sum == s) {
                ans = p;
                break;
            }
            p--;
            sum = 0;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}