vector<int> Solution::findPerm(const string A, int B) {
    stack<int> k;
    int count =0;
    vector<int> ans;
    for(int i=0;i<A.length();i++){
        count++;
        k.push(count);
        if(A[i]=='I'){
            while(!k.empty()){
                ans.push_back(k.top());
                k.pop();
            }
        }
    }
    k.push(count+1);
    while(!k.empty()){
           ans.push_back(k.top());
                k.pop();
    }
    return ans;
}
