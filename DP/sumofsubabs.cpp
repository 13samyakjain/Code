#include<bits/stdc++.h>
using namespace std;
class Solution{

public:
int minsubsetSum(vector<int>& arr,int n){
    int totalsum = 0;
    for(int i=0;i<arr.size();i++){
        totalsum+=arr[i];
    }
    int k = totalsum;
    vector<vector<bool>> dp(n,vector<bool>(k+1,0)));
    for(int i=0;i<n;i++){
        dp[i][0] = true;
    }
    if(arr[0]<=k){
        dp[0][arr[0]] = truel;
    }
    for(int i=1;i<n;i++){
        for(int target = 1;target<=k;target++){
            bool notake = dp[i-1][target];
            bool take = false;
            if(arr[i]<= target) take = dp[i-1][target-arr[i]];
            dp[i][target] = take | notake;
        }
    }
    int mini = INT_MAX;
    for(int s1=0;s1<=totalsum/2;s1++){
        if(dp[n-1][s1]==true)
        mini = min(mini,(totalsum-s1);s1);
    }
    return mini
}
}