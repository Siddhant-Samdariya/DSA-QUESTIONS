#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> limited;
        int sum = 0, count = 0, j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (j < queries.size() && (sum + nums[i]) <= queries[j]) {
                sum += nums[i];
                count++;
            }
            if (i == nums.size() - 1) {
                limited.push_back(count);
                i = -1;
                j++;
                count = 0;
                sum = 0;
            }
            if (j == queries.size())
                break;
        }
        return limited;
    }
};

int main(){
    
    return 0;
}