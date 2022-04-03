#include<bits/stdc++.h>
using namespace std;
class solution[
    public:
        void dfs(int node,vector<int>& vis,vector<int> adj[],vector<int>& storedfs){
            storedfs.push_back(node);
            vis[node] = 1;
            for(auto it: adj[node]){
                if(!vis[it]){
                    dfs(it,vis,adj, storedfs);
                }
            }
        }

        vector<int> dfsOfGraph(int v,vector<int> adj[]){
            vector<int> storedfs;
            vector<int> vis(v+1,0);
            for(int i=1;i<=v;i++){
                if(!vis[i]){
                    dfs(i,vis,adj,storedfs);
                }
            }
            return storesfs
        }
]