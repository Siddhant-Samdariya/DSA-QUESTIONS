#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());
        while (k != 0) {
            int remove = pq.top();
            pq.pop();
            remove -= remove / 2;
            pq.push(remove);
            k--;
        }
        int sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};

int main(){
    
    return 0;
}