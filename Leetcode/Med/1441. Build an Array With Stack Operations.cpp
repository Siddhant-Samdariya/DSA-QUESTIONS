#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        queue<int> q;
        vector<string> s;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        int i=0;
        while(!q.empty())
        {
            if(i==target.size()) break;
            if(q.front()==target[i])
            {
                s.push_back("Push");
                i++;
            }
            else
            {
                s.push_back("Push");
                s.push_back("Pop");
            }
            q.pop();

        }
        return s;
    }
};

int main(){
    
    return 0;
}