#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<int> n;
        vector<bool> ans;
        int x=0;
        for(int i=0;i<l.size();i++)
        {
            for(int j=l[i];j<=r[i];j++)
            {
                n.push_back(nums[j]);
            }
            sort(n.begin(),n.end());
            int diff=n[1]-n[0];
            bool d=true;
            for(int j=1;j<n.size()-1;j++)
            {
                if(n[j+1]-n[j]!=diff)
                {
                    d=false;
                    break;
                }
            }
            ans.push_back(d);
            n.clear();
        }
        return ans;
    }
};

int main(){
    
    return 0;
}