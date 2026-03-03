#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        string yr=date.substr(0,4);
        string m=date.substr(5,2);
        string d=date.substr(8,2);
        int y=stoi(yr);
        int mo=stoi(m);
        int day=stoi(d);
        string bdate="";
        while(y>0)
        {
            int x=y%2;
            bdate+=to_string(x);
            y/=2;
        }
        reverse(bdate.begin(),bdate.end());
        bdate+="-";
        string bmo="";
        while(mo>0)
        {
            int x=mo%2;
            bmo+=to_string(x);
            mo/=2;
        }
        reverse(bmo.begin(),bmo.end());
        bdate+=bmo+"-";
        string bd="";
        while(day>0)
        {
            int x=day%2;
            bd+=to_string(x);
            day/=2;
        }
        reverse(bd.begin(),bd.end());
        bdate+=bd;
        return bdate;
    }
};

int main(){
    
    return 0;
}