#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i = 0, j = i + 1, count = 0;
        while (i != nums.size() - 1) {
            if (nums[i] + nums[j] < target)
                count++;
            j++;
            if (j == nums.size()) {
                i++;
                j = i + 1;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}