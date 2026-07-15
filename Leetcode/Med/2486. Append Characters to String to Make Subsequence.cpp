#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0,index=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return t.size()-j;
    }
};

int main(){
    
    return 0;
}