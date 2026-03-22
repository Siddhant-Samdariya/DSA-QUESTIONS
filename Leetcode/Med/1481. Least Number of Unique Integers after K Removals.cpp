#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> freq;
        int count=1;
        if(arr.size()==1 && k==1) return 0;
        if(arr.size()==1 && k==0) return 1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                freq.push_back({arr[i],count});
                count=1;
            }
        }
        freq.push_back({arr.back(),count});
        sort(freq.begin(), freq.end(), [](vector<int> &a, vector<int> &b) 
        {
            return a[1] < b[1];
        });
        int kcount=0;
        for(int i=0;i<freq.size()-1;i)
        {
            if(k==0) break;
            if(freq[i][1]==0) i++;
            freq[i][1]-=1;
            k--;
        }
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i][1]>0) kcount++;
        }
        return kcount;
    }
};

int main(){
    
    return 0;
}