#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> freq;
        for(int i : tasks)
        {
            freq[i]++;
        }
        auto i=freq.begin();
        int round=0;
        while(i!=freq.end())
        {
            if(i->second < 2) return -1;
            if(i->second%3==0)
            {
                round+=(i->second)/3;
                i->second = 0;
            }
            else if(i->second%3==1)
            {
                round+=(i->second -4)/3 +2;
            }
            else
            {
                round+=(i->second)/3 + 1;
            }
            i++;
        }
        return round;
    }
};

int main(){
    
    return 0;
}