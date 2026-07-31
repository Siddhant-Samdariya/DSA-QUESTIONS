#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        long long int boat=0;
        int l=0,r=people.size()-1;
        while(l<=r)
        {
            int sum=people[r];
            r--;
            if(sum+people[l] <=limit)
            {
                l++;
            }
            boat++;
        }
        return boat;
    }
};

int main(){
    
    return 0;
}