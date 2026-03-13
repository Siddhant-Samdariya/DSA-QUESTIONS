#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int sum=0,nums=0;
        for(int i=1;i<=n;i++)
        {
            int flag=0;
            for(int j=0;j<banned.size();j++)
            {
                if(i==banned[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                sum+=i;
                nums+=1;
            } 
            if(sum>maxSum) return nums-1;
        }
        return nums;
    }
};

int main(){
    
    return 0;
}