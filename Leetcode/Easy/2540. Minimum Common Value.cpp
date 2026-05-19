#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int x = -1;
        int i = 0;
        int j = 0;
        while (i < nums2.size() && j < nums1.size()) {
            if (nums2[i] == nums1[j]) {
                x = nums2[i];
                break;
            } else if (nums1[j] < nums2[i])
                j++;
            else
                i++;
        }
        return x;
    }
};

int main(){
    
    return 0;
}