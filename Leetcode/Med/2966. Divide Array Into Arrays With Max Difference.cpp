#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> div;
        for (int i = 0; i <= nums.size() - 3; i += 3) {
            vector<int> row;
            row.push_back(nums[i]);
            if ((nums[i + 1] - nums[i]) <= k) {
                row.push_back(nums[i + 1]);
                if (nums[i + 2] - nums[i] <= k) {
                    row.push_back(nums[i + 2]);
                } else
                    return {};
            } else
                return {};
            div.push_back(row);
        }
        return div;
    }
};

int main(){
    
    return 0;
}