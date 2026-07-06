#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long int score=0,count=0;
        while(k!=0)
        {
            score+=pq.top();
            int x=pq.top();
            pq.pop();
            pq.push((x+2)/3);
            k--;
        }
       return score; 
    }
};

int main(){
    
    return 0;
}