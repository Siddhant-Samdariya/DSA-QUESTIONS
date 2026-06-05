#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> t(matrix.size(), vector<int>(matrix.size()));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                t[i][j]=matrix[j][i];
            }
        }
        vector<vector<int>> rotate(matrix.size(), vector<int>(matrix.size()));
        for(int i=0;i<t.size();i++)
        {
            for(int j=t.size()-1;j>=0;j--)
            {
                rotate[i][t.size()-j-1]=t[i][j];
            }
        }
        matrix=rotate;
    }
};

int main(){
    
    return 0;
}