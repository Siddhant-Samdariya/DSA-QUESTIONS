#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;
        while(num>0)
        {
            int digit=num%10;
            nums.push_back(digit);
            num/=10;
        }
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size()/2;i+=1)
        {
            sum+=nums[i]*10+nums[i+2];
        }
        return sum;
    }
};

int main(){
    
    return 0;
}