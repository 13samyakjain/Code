string Solution::longestPalindrome(string A) {
  int max=1;
int start=0;
int low,high;
int len=A.length();
for(int i=1;i<len;i++)
{
    low=i-1;
    high=i;
    while(high<len && low>=0 && A[low]==A[high])
    {
        if(high-low+1>max)
        {
            max=high-low+1;
            start=low;
        }
        low--;
        high++;
    }
    
    low=i-1;
    high=i+1;
    while(high<len && low>=0 && A[low]==A[high])
    {
        if(high-low+1>max)
        {
            max=high-low+1;
            start=low;
        }
        low--;
        high++;
    }
}
string re="";
for(int i=start;i<=start+max-1;i++)
{
    re+=A[i];
}

return re;
}
