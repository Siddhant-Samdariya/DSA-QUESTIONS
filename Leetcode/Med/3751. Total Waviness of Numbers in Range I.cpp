#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int num=num1;
        int wave=0;
        while(num1<=num2)
        {
            string s=to_string(num1);
            if(s.size()<3)
            {
                num1++;
                continue;
            }
            int j=1;
            while(j<s.size()-1)
            {
                if((s[j-1]> s[j] && s[j+1]>s[j]) || (s[j-1] < s[j] && s[j+1] < s[j])) wave++;
                j++;
            }
            num1++;
        }
        return wave;
    }
};

int main(){
    
    return 0;
}