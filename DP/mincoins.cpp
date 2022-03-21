#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int mincoin(vector<int>& nums,int target){
            int n = nums.size();
            vector<vector<int>> dp(n,vector<int>(target+1,0));
            for(int i=0;i<=target;i++){
                // for count use bool to set dp[0][i] = (i%nums[0]==0)
                if(i%nums[0]==0)
                    dp[0][i] = i/nums[0];
            }

            for(int i=1;i<nums.size();i++){
                for(int val = 0 ; val<=target;val++){
                    int nottake = 0 + dp[i-1][target];
                    int take = 1e9;
                    if(nums[i]<=target){
                        take = 1 + dp[i][target-nums[i]];
                    }
                    /// for count use take + nottake
                    dp[i][target] = min(take,nottake);
                }
            }
            int ans = dp[n-1][target];
            if(ans>=1e9){
                return -1;
            }
            return ans;
        }
}