#include<bits/stdc++.h>
using namespace std;
class solution{
    public: 
        int maxprofit(vector<int> &price){
            int n = price.size()
            vector<vector<vector<int>>> dp(n+1,vector<<vector<int>>(2,vector<int> (3,0)));
            for(int i=n-1;i>=-;i--){
                for(int buy = 0;buy<=1;buy++){
                    for(int hold =1 ;hold<=2;hold++){
                    if(buy){
                        dp[i][buy][hold] = max(-price[i]+dp[i+1][0][hold], 0+ dp[i+1][1][hold]);
                    }else{
                        dp[i][buy][hold] = max(price[i]+ dp[i+1][1][hold-1], 0 + dp[i+1][0][hold-1]);
                    }
                    }
                }
            }
            return dp[0][1][2];
        }
}