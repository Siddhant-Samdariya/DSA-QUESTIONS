#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(tasks.begin(), tasks.end());
        sort(processorTime.begin(), processorTime.end());
        reverse(processorTime.begin(), processorTime.end());
        int time = -1;
        for (int i = 0; i < processorTime.size(); i++) {
            if (processorTime[i] + tasks[((i + 1) * 4) - 1] > time)
                time = processorTime[i] + tasks[((i + 1) * 4) - 1];
        }
        return time;
    }
};

int main(){
    
    return 0;
}