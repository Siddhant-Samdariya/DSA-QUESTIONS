#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max) max=nums[i];
        }
        int moves=0;
        for(int i=0;i<nums.size();i++)
        {
            moves+=abs(nums[i]-max);
        }
        return moves;
    }
};

int main(){
    
    return 0;
}