#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> p(nums.begin(), nums.end());
        double i_sum = 0;
        for (auto i : nums) {
            i_sum += i;
        }
        double c_sum = 0;
        int count = 0;
        while (true) {
            double temp = p.top();
            p.pop();
            if (c_sum < (i_sum) / 2) {
                c_sum += (temp / 2);
                count++;
            } else
                break;
            p.push(temp / 2);
        }
        return count;
    }
};

int main(){
    
    return 0;
}