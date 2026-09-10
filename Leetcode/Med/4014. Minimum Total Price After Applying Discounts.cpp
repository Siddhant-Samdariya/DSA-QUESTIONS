#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        vector<double> pr(prices.begin(), prices.end());
        int p=prices.size()-1;
        int d=discounts.size()-1;
        while(p>=0 && d>=0)
        {
            pr[p]=(pr[p]*(100-discounts[d]))/100.0;
            p--;
            d--;
        }
        double sum=0;
        for(double i : pr)
        {
            sum+=i;
        }
        return sum;
    }

};

int main(){
    
    return 0;
}