#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fillCups(vector<int>& amount) {
        int sum = amount[0] + amount[1] + amount[2],count=0;
        priority_queue<int> pq(amount.begin(), amount.end());
        while (sum > 0) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x>0) x--;
            if(y>0) y--;
            pq.push(x);
            pq.push(y);
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int c = pq.top();
            pq.pop();
            sum = a + b + c;
            pq.push(a);
            pq.push(b);
            pq.push(c);
            count++;
        }
        return count;
    }
};

int main(){
    
    return 0;
}