int Solution::solve(vector<int> &A) {
    int n = A.size()-1;
    sort(A.begin(),A.end());
    if(A[n]==0) return 1;
    for(int i=0;i<n;i++){
        while(A[i]==A[i+1]) i++;
        if(abs(n-i)==A[i]){
            return 1;
        }
    }
    return -1;
}
