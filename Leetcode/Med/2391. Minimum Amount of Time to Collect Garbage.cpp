#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int i=0,time=0,m=0,p=0,g=0;
        for(int i=0;i<garbage.size();i++)
        {
            for(int j=0;j<garbage[i].size();j++)
            {
                if(garbage[i][j]=='P') p=i;
                if(garbage[i][j]=='G') g=i;
                if(garbage[i][j]=='M') m=i;
            }
        }
        while(i<garbage.size())
        {
            for(int j=0;j<garbage[i].size();j++)
            {
                if(garbage[i][j]=='P') time++;
                if(garbage[i][j]=='G') time++;
                if(garbage[i][j]=='M') time++;
            }
            i++;
            if(i>0 && i-1<travel.size() && m>=i) time+=travel[i-1];
            if(i>0 && i-1<travel.size() && p>=i) time+=travel[i-1];
            if(i>0 && i-1<travel.size() && g>=i) time+=travel[i-1];
        }
        return time;
    }
};

int main(){
    
    return 0;
}