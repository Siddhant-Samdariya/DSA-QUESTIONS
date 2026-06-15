#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if(left<2) left=2;
        vector<int> p;
        set<pair<int,int>> n;
        while(left<=right)
        {
            int count=0;
            for(int i=2;i*i<=left;i++)
            {
                if(left%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0) p.push_back(left);
            left++;
        }
        if(p.size()<2) return {-1,-1};
        int diff=INT_MAX;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]-p[i-1]<diff)
            {
                if(!n.empty()) n.erase(prev(n.end()));
                n.insert({p[i],p[i-1]});
                diff=p[i]-p[i-1];
            }
        }
        return {n.begin()->second,n.begin()->first};
    }
};

int main(){
    
    return 0;
}