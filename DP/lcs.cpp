#include<bits/stdc++.h>
using namespace std;
class solution{
    public:

    // for longest palindromic seq, call lcs with a string and other string with opposite s1
        int lcs(string s,string t){
            int n = s.size();
            int m = t.size();

        //for minimum operations to make palindrome, sub string length - longest palindromic seq length
            vector<vector<int>> dp(n+1,vector<int>(m+1,0));
            for(int i=0;i<=n;i++) dp[i][0] = 0;
            for(int j=0;j<=m;j++) dp[0][j] = 0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if(s[i-1]==t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                    // for longest common substring else =0;
                    // add ans = max(else,ans)
                    else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
            return dp[n][m];

            //for coverting string 1 to string 2 use lcs in which you have to find lcs of str1 and str2 after which w it will be str1.size() + str2.size() - 2*lcs(str1,str2)
        }
}