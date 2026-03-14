#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        string x = "";
        for (auto i : s) {
            if (i == '1')
                count++;
        }
        int c = count;
        for (int i = 0; i < s.size(); i++) {
            if (c == 1)
                break;
            x += '1';
            c--;
        }
        for (int i = 0; i < (s.size() - count); i++) {
            x += '0';
        }
        x += '1';
        return x;
    }
};

int main(){
    
    return 0;
}