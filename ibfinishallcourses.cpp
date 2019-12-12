 int dfs(int u, vector<int> &adj[], bool vis[]){
     vis[u]=true;
     for(int i=0;i<adj[u].size();i++){
         int x=adj[u][i];
         if(vis[x]) return 0;
         return dfs(x, adj, vis);
     }
     return 1;
 }

int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    vector<int> adj[A+1];
    int n=A.size();
    for(int i=0;i<n;i++){
        adj[B[i]].push_back(C[i]); adj[C[i]].push_back(B[i]);
        
    }
    bool vis[A+1];
    memset(vis,false,sizeof(vis));
    return dfs(1,&adj,&vis);
    
}
