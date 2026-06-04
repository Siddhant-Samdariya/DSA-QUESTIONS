#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rev=0;
        int og=n;
        while(n>0)
        {
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
        int sum=0;
        if(og>rev)
        {
            int x=og;
            og=rev;
            rev=x;
        }
        if(og==1) og++;
        for(int i=og;i<=rev;i++)
        {
            bool prime=true;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    prime=false;
                    break;
                }
            }
            if(prime==true) sum+=i;  
        }
        return sum; 
    }
};

int main(){
    
    return 0;
}