#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0);
            else nums[i]*=-1;
        }
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        long long sum=0;
        while(l<=r)
        {
            if(l==r)
            {
                sum+=(nums[r]*nums[r]);
                break;
            }
            sum+=(nums[r]*nums[r]);
            sum-=(nums[l]*nums[l]);
            l++;
            r--;
        }
        return sum;
    }
};

int main(){
    
    return 0;
}