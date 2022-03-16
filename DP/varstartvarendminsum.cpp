#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int minpath(vector<vector<int>> &grid){
            int n = grid.size();
            int m = grid[0].size();
            vector<vector<int>> dp(n,vector<int> (m,0));
            for(int j=0;j<m;j++){
                dp[0][j] = grid[0][j];
            }
            for(int i = 1;i<n;i++){
                for(int j=0;j<m;j++){
                    int up = grid[i][j] + dp[i-1][j];
                    int ld = grid[i][j];
                    if(j>0){
                        ld+=dp[i-1][j-1];
                    }else ld+=INT_MIN;
                    int rd = grid[i][j];
                    if(j<m){
                        rd+= dp[i-1][j+1];
                    }else rd+=INT_MIN;

                    dp[i][j] = max(up,max(rd,ld));
                }
            }
            int maxi = INT_MIN;
            for(int j=0;j<m;j++){
                maxi = max(maxi,dp[n-1][j]);
            }
            return maxi;       
        }

}