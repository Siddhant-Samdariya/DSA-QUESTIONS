#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num/3-1+num/3+num/3+1==num) return {num/3-1,num/3,num/3+1};
        else return {};
    }
};

int main(){
    
    return 0;
}