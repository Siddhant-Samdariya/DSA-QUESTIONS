#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> p;
        for(int i : nums)
        {
            if(i<pivot) p.push_back(i);
        }
        for(int i : nums)
        {
            if(i==pivot) p.push_back(i);
        }
        for(int i : nums)
        {
            if(i>pivot) p.push_back(i);
        }
        return p;
    }
};

int main(){
    
    return 0;
}