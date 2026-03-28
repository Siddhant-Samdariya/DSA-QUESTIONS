#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> freq;
        for(char i : word)
        {
            freq[i]++;
        }
        int count=0,pushes=0;
        vector<int> nums;
        for(auto i=freq.begin();i!=freq.end();i++)
        {
            nums.push_back(i->second);
        }
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(count<8)
            {
                pushes+=nums[i];
                count++;
            }
            else if(count>=8 && count<16)
            {
                pushes+=nums[i]*2;
                count++;
            }
            else if(count>=16 && count<2)
            {
                pushes+=nums[i]*3;
                count++;
            }
            else
            {
                pushes+=nums[i]*4;
            }
        }
        return pushes;
    }
};

int main(){

    cout<<"he;;p";
    
    return 0;
}