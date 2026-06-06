#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        string s=to_string(num);
        while(s.size()>1)
        {
            int sum=0;
            for(int i=0;i<s.size();i++)
            {
                sum+=s[i]-'0';
            }
            s=to_string(sum);
        }
        return stoi(s);
    }
};

int main(){
    
    return 0;
}