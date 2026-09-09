#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long ans=0;
        if(n>=1000) ans += min(n, 999999LL) - 1000 + 1;
        if(n>=1000000) ans+=(min(n,999999999LL) - 1000000 + 1)*2;
        if(n>=1000000000LL) ans+=(min(n,999999999999LL)-1000000000LL+1)*3;
        if(n>=1000000000000LL) ans+=(min(n,999999999999999LL)-1000000000000LL+1)*4;
        if(n>=1000000000000000LL) ans+=(min(n,999999999999999999LL)-1000000000000000LL+1)*5;
        return ans;
    }
};

int main(){
    
    return 0;
}