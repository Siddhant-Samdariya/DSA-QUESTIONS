#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int p=0;
        for(int i=0;i<s.size();i++)
        {
            p+=(i+1)*(27-(s[i]-'a'+1));
        }
        return p;
    }
};

int main(){
    
    return 0;
}