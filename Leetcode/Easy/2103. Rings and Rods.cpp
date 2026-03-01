#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        map<char,vector<char>> ring;
        int a=0;
        for(int i=1;i<rings.size();i+=2)
        {
            ring[rings[i]].push_back(rings[i-1]);
        }
        for(auto i=ring.begin();i!=ring.end();i++)
        {
            sort(i->second.begin(),i->second.end());
            int count=1;
            for(int j=1;j<i->second.size();j++)
            {
                if(i->second.size()<3) break;
                if(i->second[j-1]!=i->second[j]) count++;
            }
            if(count==3) a++;
        }
        return a;
    }
};
int main(){
    
    return 0;
}