#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        int f=1,s=1,sum=2;
        vector<int> fibo;
        fibo.push_back(1);
        fibo.push_back(1);
        for(int i=3;sum<=k;i++)
        {
            fibo.push_back(sum);
            f=s;
            s=sum;
            sum=f+s;
        }
        int fibsum=0,count=0;
        for(int i=fibo.size()-1;i>=0;i--)
        {
            if(fibsum==k) break;
            if(k>=fibo[i] && fibsum+fibo[i]<=k)
            {
                fibsum+=fibo[i];
                count++;
            } 
        }
        return count;
    }
};

int main(){
    
    return 0;
}