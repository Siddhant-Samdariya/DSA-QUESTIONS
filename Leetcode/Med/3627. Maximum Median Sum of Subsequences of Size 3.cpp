#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-2;
        long long int med=0;
        while(r>l)
        {
            med+=nums[r];
            l++;
            r-=2;
        }
        return med;
    }
};

int main(){
    
    return 0;
}