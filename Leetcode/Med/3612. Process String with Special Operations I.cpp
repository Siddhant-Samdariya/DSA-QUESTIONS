#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string processStr(string s) {
        string b="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122) b.push_back(s[i]);
            else if(s[i]=='*' && !b.empty()) b.pop_back();
            else if(s[i]=='#') b+=b;
            else reverse(b.begin(),b.end());
        }
        return b;
    }
};

int main(){
    
    return 0;
}