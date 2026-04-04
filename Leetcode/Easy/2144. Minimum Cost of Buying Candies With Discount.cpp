#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int money=0;
        for(int i=cost.size()-1;i>=0;i-=3)
        {
            money+=cost[i];
            if(i-1 >= 0) money+=cost[i-1];
        }
        return money;
    }
};

int main(){
    
    return 0;
}