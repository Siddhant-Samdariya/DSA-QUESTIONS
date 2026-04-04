#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int subs=0;
        int first=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-first<=k) continue;
            else
            {
                subs++;
                first=nums[i];
            }
        }
        subs++;
        return subs;
    }
};

int main(){
    
    return 0;
}