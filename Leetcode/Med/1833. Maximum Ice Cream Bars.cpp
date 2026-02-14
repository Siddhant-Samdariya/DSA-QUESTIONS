#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ice=0;
        int i=0;
        while(i<costs.size() && costs[i]<=coins)
        {
            ice++;
            coins-=costs[i];
            i++;
        }
        return ice;
    }
};
int main(){
    
    return 0;
}