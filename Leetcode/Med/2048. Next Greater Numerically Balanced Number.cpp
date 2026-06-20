#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nextBeautifulNumber(int n) {
        n++;
        while(true)
        {
            int freq[10]={};
            if(n<22 && n!=1) return 22;
            string s=to_string(n);
            for(auto i : s)
            {
                freq[i-'0']++;
            }
            bool flag=true;
            for(int i=0;i<10;i++)
            {
                if(freq[i]!=0 && freq[i]!=i) flag=false;
            }
            if(flag==true) return n;
            n++;
        }
        return {};
    }
};

int main(){
    
    return 0;
}