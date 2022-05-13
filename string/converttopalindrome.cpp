int Solution::solve(string A) {
 if(A.length()==1||A.length()==2)
        return 1;
    int i=0, j = A.length()-1;
    int cnt =0;
    while(i<=j){
        if(cnt>1)
            break;
        if(A[i]!=A[j]){
            j--;
            cnt++;
            continue;
        }
        i++;j--;
        if(cnt>1)
            break;
    }
    if(cnt==1 || cnt ==0)
        return 1;
    i=0;j=A.length()-1;
    cnt =0;
    while(i<=j){
        if(cnt>1)
            break;
        if(A[i]!=A[j]){
            i++;
            cnt++;
            continue;
        }
        i++;j--;    
    }
    if(cnt==1 || cnt ==0)
        return 1;
    return 0;
}
