#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        if(low<=10) low=11;
        while(low<=high)
        {
            string s=to_string(low);
            if(s.size()%2!=0)
            {
                low++;
                continue;
            }
            int i=0;
            long long int suml=0,sumr=0;
            while(i<s.size())
            {
                if(i<s.size()/2) suml+=(s[i]-'0');
                else sumr+=(s[i]-'0');
                i++;
            }
            if(suml==sumr) count++;
            low++;
        }
        return count;
    }
};

int main(){
    
    return 0;
}