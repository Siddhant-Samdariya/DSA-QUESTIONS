#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i=0,j=0;
        string n="";
        while(i<s.size())
        {
            if(j<spaces.size() && i==spaces[j])
            {
                n.push_back(' ');
                j++;
            }
            n.push_back(s[i]);
            i++;
        }
        return n;
    }
};

int main(){
    
    return 0;
}