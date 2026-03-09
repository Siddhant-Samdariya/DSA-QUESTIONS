#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row,col;
        int replace=0,rise=0;
        for(int i=0;i<grid.size();i++)
        {
            int maxrow=-1;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[i][j]>maxrow) maxrow=grid[i][j];
            }
            row.push_back(maxrow);
        }
        for(int i=0;i<grid.size();i++)
        {
            int maxcol=-1;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]>maxcol) maxcol=grid[j][i];
            }
            col.push_back(maxcol);
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                replace=min(row[i],col[j]);
                if(replace<=grid[i][j]) continue;
                else
                {
                    rise+=replace-grid[i][j];
                    grid[i][j]=replace;
                } 
            }
        }
        return rise;
    }
};

int main(){
    
    return 0;
}