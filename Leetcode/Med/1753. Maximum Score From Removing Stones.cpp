#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int score = 0;
        while (true) {
            int x = pq.top(); pq.pop();
            x --; 
            int y = pq.top(); pq.pop();
            if(y==0) break;
            y --;
            pq.push(x);
            pq.push(y);
            score ++;
        }
        return score;
    }
};

int main(){
    
    return 0;
}