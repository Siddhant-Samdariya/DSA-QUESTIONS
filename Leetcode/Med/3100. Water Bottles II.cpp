#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=numBottles;
        int drink=numBottles;
        numBottles=0;
        while(empty>=numExchange)
        {
            empty-=numExchange;
            numBottles++;
            numExchange++;
            if(numBottles>=0)
            {
                drink+=numBottles;
                empty+=numBottles;
                numBottles=0;
            }
        }
        return drink;
    }
};

int main(){
    
    return 0;
}