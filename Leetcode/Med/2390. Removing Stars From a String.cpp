#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ns;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*') st.pop();
            else st.push(s[i]);
        }
        while(!st.empty())
        {
            ns+=st.top();
            st.pop();
        }
        reverse(ns.begin(),ns.end());
        return ns;
    }
};

int main(){
    
    return 0;
}