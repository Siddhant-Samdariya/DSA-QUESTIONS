#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        set<pair<int,char>> t;
        string d;
        for(auto i : s)
        {
            freq[i]++;
        }
        for(auto i : freq)
        {
            t.insert({i.second,i.first});
        }
        for(auto i=t.rbegin();i!=t.rend();i++)
        {
            for(int j=0;j<i->first;j++)
            {
                d+=i->second;
            }
        }
        return d;
    }
};

int main(){
    
    return 0;
}