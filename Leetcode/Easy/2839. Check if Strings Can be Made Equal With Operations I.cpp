#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string s3 = "";
        s3 = "";
        s3 += s1[2];
        s3 += s1[1];
        s3 += s1[0];
        s3 += s1[3];
        if (s3 == s2)
            return true;
        s3 = "";
        s3 += s1[0];
        s3 += s1[3];
        s3 += s1[2];
        s3 += s1[1];
        if (s3 == s2)
            return true;
        s3 = "";
        s3 += s1[2];
        s3 += s1[3];
        s3 += s1[0];
        s3 += s1[1];
        if (s3 == s2)
            return true;
        if (s1 == s2)
            return true;
        return false;
    }
};

int main(){
    
    return 0;
}