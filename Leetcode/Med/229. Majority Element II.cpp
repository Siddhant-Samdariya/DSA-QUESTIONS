#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1) return {nums[0]};
        if(nums.size()==2) 
        {
            if(nums[0]!=nums[1]) return {nums[0],nums[1]};
            else return {nums[0]};
        }
        int count=1;
        sort(nums.begin(),nums.end());
        map<int,int> c;
        vector<int> major;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) count++;
            else
            {
                c[nums[i-1]]=count;
                count=1;
            }
        }
        c[nums[nums.size()-1]]=count;
        double t=nums.size()/3;
        for(auto i=c.begin();i!=c.end();i++)
        {
            if(i->second > t) major.push_back(i->first);
        }
        return major;
    }
};

int main(){
    
    return 0;
}