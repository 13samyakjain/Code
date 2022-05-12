int Solution::solve(vector<int> &A, int B) {
      int h = 0;
      int maxi = 0;
      int mini =0;
      int ans = 0;
      
      for(int i=0;i<A.size();i++){
          maxi = max(maxi,A[i]);
      }
      
     while(mini<=maxi){
          int mid = mini+(maxi-mini)/2;
          long wood = 0;
          for(int j=0;j<A.size();j++){
              if(A[j]-mid>0){
                  wood = wood+A[j]-mid;
              }
          }
          if(wood>=(long)B){
              mini = mid+1;
              //0 5 10 15
              ans = max(ans,mid);//15
          }else{
              maxi = mid-1;
          }
      }
      return ans;
}