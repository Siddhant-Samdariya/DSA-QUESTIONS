#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1) return 1;
        if(nums.size()==2) return 2;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int max_index=0,min_index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi) max_index=i;
            if(nums[i]==mini) min_index=i;
        }
        int x=1+max(min_index,max_index);
        int y=min_index+1 + nums.size()-max_index;
        int z=max_index+1 + nums.size()-min_index;
        int w=nums.size()- min(min_index,max_index);
        return min({x,y,z,w});
    }
};

int main(){
    
    return 0;
}