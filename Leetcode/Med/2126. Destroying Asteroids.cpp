#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(long long int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++)
        {
            if(mass>=asteroids[i]) mass+=asteroids[i];
            else return false;
        }
        return true;
    }
};

int main(){
    
    return 0;
}