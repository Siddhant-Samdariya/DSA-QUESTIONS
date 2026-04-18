#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        if(n<10) return 0;
        int og=n,rev=0;
        while(n>0)
        {
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
        return abs(og-rev);
    }
};

int main(){
    
    return 0;
}