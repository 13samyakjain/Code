int solve(vector<vector<int>> A){
    // calc the height of the matrix
    for(int i=1;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]!=0){
                A[i][j]+=A[i-1][j];
            }
        }
    }
    // sort the array row wise
    for(int i=0;i<A.size();i++){
        sort(A[i].begin(),A[i].end());
    }
    
    int maxarea=0,area=0;
    for(int i=0;i<A.size();i++){
        int width = 1;
        for(int j=A[0].size();j--){
            area = width*A[i][j];
            maxarea = max(area,maxarea);
        }
    }
    return maxarea;
}