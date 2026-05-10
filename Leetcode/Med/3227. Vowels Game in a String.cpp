#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool doesAliceWin(string s) {
        // int i=0,index=0,count=0;
        // while(true)
        // {
        //     while(i<s.size())
        //     {
        //         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        //         {
        //             count++;
        //             if(count%2!=0) index=i;
        //         }
        //         i++;
        //     }
        //     if(count==0) return false;
        //     s.erase(0,index);
        //     count=0;
        //     while(i<s.size())
        //     {
        //         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        //         {
        //             count++;
        //             if(count%2==0) index=i;
        //         }
        //         i++;
        //     }
        //     if(count==0) return true;
        //     s.erase(0,index);
        //     count=0;
        // }
        // return {};
        for(char c : s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        }
        return false;
    }
};

int main(){
    
    return 0;
}