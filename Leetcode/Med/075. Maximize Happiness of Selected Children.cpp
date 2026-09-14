#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long int happy=0,count=0;
        for(int i=happiness.size()-1;i>=0;i--)
        {
            if(k==0) break;
            if(happiness[i]-count>=0) happiness[i]-=count;
            else if(happiness[i]-count<=0) happiness[i]=0;
            happy+=happiness[i];
            k--;
            count++;
        }
        return happy;
    }
};

int main(){
    
    return 0;
}