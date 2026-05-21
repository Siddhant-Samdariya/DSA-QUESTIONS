#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        sort(nums.begin(), nums.end());
        map<int,int> c;
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) count++;
            else
            {
                c[nums[i-1]]=count;
                count=1;
            }
        }
        c[nums[nums.size()-1]] = count;
        int max=1,m=0;
        for(auto i=c.begin();i!=c.end();i++)
        {
            if(i->second > max)
            {
                max=i->second;
                m=i->first;
            }
        }
        return m;
    }
};

int main(){
    
    return 0;
}