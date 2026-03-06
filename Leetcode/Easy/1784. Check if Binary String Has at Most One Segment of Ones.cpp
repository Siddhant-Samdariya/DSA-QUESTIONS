#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0' && s[i+1]=='1') return false;
        }
        return true;
    }
};

class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag=true;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1')
            {
                for(int j=i+1;j<s.size()-1;j++)
                {
                    if(s[j]=='0' && s[j+1]=='1')
                    {
                        flag=false;
                        break;
                    } 
                }
            }
            if(flag==false) break;
        }
        return flag;
    }
};

int main(){
    
    return 0;
}