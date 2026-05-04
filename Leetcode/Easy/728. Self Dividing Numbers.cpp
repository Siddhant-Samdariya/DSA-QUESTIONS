#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>sdn;
        string s="";
        for(int i=left;i<=right;i++)
        {
            if(i<=9) sdn.push_back(i);
            else
            {
                int x=i,flag=0;
                while(x>0)
                {
                    int digit=x%10;
                    if(digit==0 || i%digit!=0) flag=-1;
                    x/=10;
                }
                if(flag==0) sdn.push_back(i);
            }
        }
        return sdn;
    }
};

int main(){
    
    return 0;
}