#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int numofsubset(vector<int>& num,int target){
            int n = num.size();
            vector<vector<int>> dp(n,vector<int>(target+1,0));
            for(int i=0;i<n;i++){
                dp[i][0] = 1;
            }
            if(num[0]<=target) dp[0][num[0]] = 1;

            for(int i=1;i<n;i++){
                for(int s = 0;s<=target;s++){
                    int nottake = dp[i-1][s];
                    int take = 0;
                    if(num[i]<=target) take = dp[i-1][s-num[i]];
                    dp[i][s] = take + nottake;
                }
            }
            return dp[n-1][target];

        }
}