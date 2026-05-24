#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
        string r=s.substr(0,k);
        reverse(r.begin(),r.end());
        string j=r;
        j+=s.substr(k,s.size()-k);
        return j;
    }
};

int main(){
    
    return 0;
}