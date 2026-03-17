#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitNum(int num) {
        vector<int> digits;
        int size1=0,size2=0,num1=0,num2=0;
        while(num>0)
            {
                int digit=num%10;
                num/=10;
                digits.push_back(digit);
            }
        sort(digits.begin(),digits.end());
        if(digits.size()%2==0)
        {
            size1=size2=digits.size()/2;
        }
        else
        {
            size1=digits.size()/2 + 1;
            size2=digits.size()/2;
        }
        for(int i=0;i<digits.size();i+=2)
            {
                num1+=digits[i]*pow(10,size1-1);
                size1--;
            }
        for(int i=1;i<digits.size();i+=2)
            {
                num2+=digits[i]*pow(10,size2-1);
                size2--;
            }
        return num1+num2;
    }
};

int main(){
    
    return 0;
}