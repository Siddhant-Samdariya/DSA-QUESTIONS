#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> g;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            // g.push_back(gcd(nums[i], mx));
        }
        sort(g.begin(), g.end());
        int l = 0, r = g.size() - 1;
        long long int sum = 0;
        while (l < r) {
            // sum += gcd(g[l], g[r]);
            l++;
            r--;
        }
        return sum;
    }
};

int main(){
    
    return 0;
}