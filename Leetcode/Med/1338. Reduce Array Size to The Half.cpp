#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> c;
        int count=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1]) count++;
            else
            {
                c.push_back(count);
                count=1;
            }
        }
        c.push_back(count);
        sort(c.begin(),c.end());
        int sum=0;
        int s=0;
        for(int i=c.size()-1;i>=0;i--)
        {
            if(sum+c[i]>=arr.size()/2) break;
            sum+=c[i];
            s++;
        }
        return s+1;
    }
};

int main(){
    
    return 0;
}