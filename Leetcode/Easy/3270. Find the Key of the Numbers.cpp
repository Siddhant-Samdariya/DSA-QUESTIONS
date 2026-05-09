#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s1=to_string(num1),s2=to_string(num2),s3=to_string(num3);
        int x=4-s1.size(),y=4-s2.size(),z=4-s3.size();
        s1.insert(0,x,'0');
        s2.insert(0,y,'0');
        s3.insert(0,z,'0');
        string key="";
        for(int i=0;i<s1.size();i++)
        {
            int m=min({s1[i]-'0',s2[i]-'0',s3[i]-'0'});
            key+=char(m+'0');
        }
        return stoi(key);
    }
};

int main(){
    
    return 0;
}