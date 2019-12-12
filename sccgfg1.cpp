void fillorder(int u, bool vis[],stack<int> &s, vector<int> adj[]){
    vis[u]=true;
    for(auto itr: adj[u]){
        if(!vis[itr]) fillorder(itr,vis,s,adj);
    }
    s.push(u);
}
void dfs(int u, bool vis[], vector<int> tadj[]){
    vis[u]=true;
    for(auto it: tadj[u])
    if(!vis[it]) dfs(it,vis,tadj);
}


int kosaraju(int V, vector<int> adj[])
{
    stack<int> s;
    bool vis[V];
    memset(vis,false,sizeof(vis));
    
    for(int i=0;i<V;i++){
        if(!vis[i]) fillorder(i,vis,s,adj);
    }
    vector<int> tadj[V];
    for(int i=0;i<V;i++){
        for(auto j:adj[i] ) tadj[j].push_back(i);
    }
    memset(vis,false,sizeof(vis));
    int cnt=0;
    while(!s.empty()){
        int x= s.top(); s.pop();
        if(!vis[x]){
            dfs(x,vis,tadj);
            cnt++;
        }
    }
    return cnt;
    
}