#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        while (!num.empty()) {
            if (num[num.size() - 1] == '1' || num[num.size() - 1] == '3' ||
                num[num.size() - 1] == '5' || num[num.size() - 1] == '7' ||
                num[num.size() - 1] == '9')
                {
                    return num;
                    break;
                }
            num.erase(num.begin() + num.size() - 1);
        }
        return "";
    }
};

int main(){
    
    return 0;
}