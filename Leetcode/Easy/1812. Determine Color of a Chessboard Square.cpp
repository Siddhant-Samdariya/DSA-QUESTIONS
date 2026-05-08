#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if (coordinates == "a1")
            return false;
        string s = "";
        string alpha = "abcdefgh", num = "12345678";
        char c = 'b';
        int i = 0, j = 0;
        while (true) {
            s += alpha[i];
            s += num[j];
            if (coordinates == s)
                break;
            c = (c == 'b') ? 'w' : 'b';
            j++;
            if (j == 8) {
                i++;
                j = 0;
                c = (c == 'b') ? 'w' : 'b';
            }
            s = "";
        }
        return c == 'w';
    }
};

int main(){
    
    return 0;
}