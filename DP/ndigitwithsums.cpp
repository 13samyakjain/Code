#include<bits/stdc++.h>
using namespace std;

int rec(vector<vector<int>> &dp,int id,int sum){
    if(sum<0) return 0;
    if(id==0&&sum==0) return 1;
    if(id==0) return 0;

    if(dp[id][sum]!=-1) return dp[id][sum];
    long long int ans = 0;
    for(int i=0;i<=9;i++){
        ans += rec(id-1,sum-i);
        ans %= 1000000007;
    }
    dp[id][sum] =ans;
}
int solve(int n, int sum){
    int ans = 0;
    vector<vector<int>> dp(n+1,vector<int> (sum+1,-1));
    for(int i=1;i<=9;i++){
        ans += rec(dp,n-1,sum-i);
        ans %= 1000000007;
    }
    return ans;
}