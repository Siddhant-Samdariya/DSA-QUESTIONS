#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 1, dist = 0;
        while (i < nums1.size() && j < nums2.size()) 
        {
            if (nums1[i] > nums2[j]) 
            {
                i++;
                if (j < i) j = i;
            } 
            else 
            {
                dist = max(dist, j - i);
                j++;
            }
        }
    return dist;
}
};

int main(){
    
    return 0;
}