#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> screen;
        string s="a";
        screen.push_back(s);
        int i=0;
        while(s!=target)
        {
            if(s[i]==target[i])
            {
                s.push_back('a');
                i++;
            }
            else
            {
                s[i]=char(s[i]+1);
            }
            screen.push_back(s);
        }
        return screen;
    }
};

int main(){
    
    return 0;
}