#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i=0;i<capacity.size();i++)
        {
            capacity[i]-=rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<capacity.size();i++)
        {
            if(capacity[i]==0) continue;
            else
            {
                if(additionalRocks>=capacity[i])
                {
                    additionalRocks-=capacity[i];
                    capacity[i]=0;
                }
            }
        }
        int count=0;
        for(int i : capacity)
        {
            if(i==0) count++;
        }
        return count;
    }
};

int main(){
    
    return 0;
}