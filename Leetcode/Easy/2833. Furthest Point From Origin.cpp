#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r=0,l=0;
        for(char& i : moves)
        {
            if(i=='L') l++;
            if(i=='R') r++;
        }
        if(l>=r)
        {
            for(char& i : moves)
            {
                if(i=='_') i='L';
            }
        }
        else
        {
            for(char& i : moves)
            {
                if(i=='_') i='R';
            }
        }
        int dist=0;
        for(char& i : moves)
        {
            if(i=='L') dist--;
            else dist++;
        }
        return abs(dist);
    }
};

int main(){
    
    return 0;
}