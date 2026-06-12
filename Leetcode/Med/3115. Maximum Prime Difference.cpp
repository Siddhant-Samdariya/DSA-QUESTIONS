#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int diff=0;
        while(l<r)
        {
            if(nums[l]==1)
            {
                l++;
                continue;
            } 
            else if(nums[r]==1)
            {
                r--;
                continue;
            }
            int pl=0,pr=0;
            for(int i=2;i*i<=nums[l];i++)
            {
                if(nums[l]%i==0)
                {
                    pl++;
                    break;
                }
            }
            for(int i=2;i*i<=nums[r];i++)
            {
                if(nums[r]%i==0)
                {
                    pr++;
                    break;
                }
            }
            if(pl==0 && pr==0 && r-l>diff) diff=r-l;
            else if(pl==1) l++;
            else r--;
        }
        return diff;
    }
};

int main(){
    
    return 0;
}