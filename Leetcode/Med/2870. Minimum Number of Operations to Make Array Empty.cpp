#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> freq;
        for(int i : nums)
        {
            freq[i]++;
        }
        int op=0;
        for(auto i=freq.begin();i!=freq.end();i)
        {
            if(i->second==1) return -1;
            if(i->second>3 && i->second%3!=0 && i->second%2!=0)
            {
                i->second-=3;
                op++;
            }
            else if(i->second%3==0)
            {
                i->second-=3;
                op++;
            }
            else if(i->second%2==0)
            {
                i->second-=2;
                op++;
            }
            if(i->second==0) i++;
        }
        return op;
    }
};

int main(){
    
    return 0;
}