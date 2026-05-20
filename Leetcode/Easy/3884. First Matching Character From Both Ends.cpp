#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMatchingIndex(string s) {
        int i=0,l=s.size()-1;
        while(i<=l)
        {
            if(s[i]==s[l])
            {
                return i;
                break;
            }
            i++;
            l--;
        }
        return -1;
    }
};

int main(){
    
    return 0;
}