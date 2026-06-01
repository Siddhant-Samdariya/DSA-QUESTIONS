#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        string x = "";
        priority_queue<int, vector<int>, greater<int>> p;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                v.push_back(s[i]);
                p.push(i);
            }
            else x+=s[i];
        }
        sort(v.begin(), v.end());
        int i = 0;
        while (!p.empty()) {
            x.insert(x.begin() + p.top(), v[i]);
            i++;
            p.pop();
        }
        return x;
    }
};

int main(){
    
    return 0;
}