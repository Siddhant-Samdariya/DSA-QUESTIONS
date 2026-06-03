#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        int i=0;
        while(true)
        {
            if(i*i==n) return i;
            else if(i*i>n) return i-1;
            i++;
        }
        return {};
    }
};

int main(){
    
    return 0;
}