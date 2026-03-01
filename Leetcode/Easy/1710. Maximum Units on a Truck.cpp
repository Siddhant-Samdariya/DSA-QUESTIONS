#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>&a,vector<int>&b)
        {
            return a[1]>b[1];
        });
        int units=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]>truckSize)
            {
                units+=truckSize*boxTypes[i][1];
                break;
            }
            units+=boxTypes[i][0]*boxTypes[i][1];
            truckSize-=boxTypes[i][0];
        }
        return units;
    }
};

int main(){
    
    return 0;
}