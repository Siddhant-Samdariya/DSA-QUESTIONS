#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        sort(sentence.begin(),sentence.end());
        int count=1;
        for(int i=1;i<sentence.size();i++)
        {
            if(sentence[i]!=sentence[i-1]) count++;
        }
        return count==26;
    }
};

int main(){
    
    return 0;
}