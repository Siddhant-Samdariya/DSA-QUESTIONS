#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int countl=0,countr=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[j]==')')
                    {
                        s.erase(j,1);
                        s.erase(i,1);
                        i-=1;
                        break;
                    }
                }
            }
        }
        return s.size();
    }
};

int main(){
    
    return 0;
}