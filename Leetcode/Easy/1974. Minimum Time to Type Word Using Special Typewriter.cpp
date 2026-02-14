#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        int i=0,time=0,dis=0,cir=0;
        char curr='a';
        while(i<word.size())
        {
            dis=abs((curr-'a')-(word[i]-'a'));
            cir=26-dis;
            time+=min(dis,cir);
            time++;
            curr=word[i];
            i++;
        }
        return time;
    }
};
int main(){
    
    return 0;
}