#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int num=0,sum=0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                num=num*10+ (s[i]-'0');
                sum+=(s[i]-'0');
            }
        }
        return num*sum;
    }
};

int main(){
    
    return 0;
}