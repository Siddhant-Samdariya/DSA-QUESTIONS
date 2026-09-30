#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int count=0;
        for(int i=0;i<word.size()-1;i++)
        {
            if(abs(word[i+1]-word[i])<=1) 
            {
                count++;
                word[i+1]='@';
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}