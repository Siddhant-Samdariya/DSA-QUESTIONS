#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        for(int i=0;i<words.size();i++)
        {
            int sum=0;
            for(int j=0;j<words[i].size();j++)
            {
                sum+=weights[words[i][j]-'a'];
            }
            s+='a'+(26 - sum%26 -1) ;
        }
        return s;
    }
};

int main(){
    
    return 0;
}