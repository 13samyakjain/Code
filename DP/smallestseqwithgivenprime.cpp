vector<int> solve(int A,int B, int C,int D){
    vector<int> sol;
    sol.push_back(1);
    int i=0,j=0,k=0;
    while(D--){
        int x = min(sol[i]*A,min(sol[j]*B,sol[k]*C));
        sol.push_back(x);
        if(x== sol[i]*A) i++;
        if(x== sol[j]*B) j++;
        if(x== sol[k]*C) k++;
    }
    sol.erase(sol.begin());
    return sol;
}