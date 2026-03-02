#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int maxw=0;
        int l=0,r=height.size()-1;
        while(l<r)
        {
            if(maxw<(r-l)*(min(height[l],height[r]))) maxw=(r-l)*(min(height[l],height[r]));
            if(height[l]>=height[r]) r--;
            else l++;
        }
        return maxw;
    }
};

int main(){
    
    return 0;
}