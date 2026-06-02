#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string s="";
        for(int i=0;i<nums.size();i++)
        {
            s+=to_string(nums[i]);
        }
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==digit+'0') count++;
        }
        return count;
        
    }
};

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]>0)
            {
                int digit_s=nums[i]%10;
                if(digit_s==digit) count++;
                nums[i]/=10;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}