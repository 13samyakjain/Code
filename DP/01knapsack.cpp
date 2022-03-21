#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    int knapsack(vector<int> wt,vector<int> val,int n,int Maxweight){

        vector<vector<int>> dp(n,vector<int> (Maxweight+1,0));
        for(int W=0;W<=Maxweight;W++){
            // for unbounded case dp[0][w] = W/wt[0] * val[0]
            dp[0][W] = val[0];
        }

        for(int i=1;i<n;i++){
            for(int W=1;W<=Maxweight;W++){
                int nottake = 0 + dp[n-1][W];
                int take = INT_MIN;
                if(wt[i]<=w){
                    take = val[i] + dp[n-1][W-wt[i]];
                }
                dp[i][W] = max(take,nottake);
            }
        }
        return dp[n-1][Maxweight];
    }
}