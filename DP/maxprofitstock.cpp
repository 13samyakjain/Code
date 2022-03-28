#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        long getansert(vector<long> &values){
            long n = values.size();
            vector<vector<long>> dp(n+1,vector<long>(2,0));
            dp[n][0] = 0;
            dp[n][1] = 0;
            for(int i=n-1;i>=-;i--){
                for(int buy = 0;buy<=1;buy++){
                    long profit =0;
                    if(buy){
                        profit = max(-values[i]+ dp[i+1][0],0+ dp[i+1][1]);
                    }else{
                        profit = max(values[i]+dp[i+1][1], 0+ dp[i+1][0])
                    }
                    dp[i][buy] = profit;
                }
            }
            return dp[0][1];
        }
}