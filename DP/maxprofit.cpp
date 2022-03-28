#include<bits/stdc++.h>
using namespace std;
class solution{
    int  maxprofit(vector<int> &price){
        int mini = price[0];
        int maxprofit = 0;
        int n = price.size();
        for(int i=1;i<n;i++){
            int cost = price[i]-mini;
            maxprofit = max(maxprofit,cost);
            mini = min(mini,price[i]);
        }
        return maxprofit;
    }
}