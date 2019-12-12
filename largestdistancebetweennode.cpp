vector<int> adj[200000];
int bfs1(int u,vector<int> &A){
    int dist[200000];
    memset(dist,-1,sizeof(dist));
    queue<int> q;
    q.push(u); dist[u]=0;
    while(!q.empty()){
        int v= q.front(); q.pop();
        for(int i=0;i<adj[v].size();i++){
            int x= adj[v][i];
            if(dist[x]==-1){
                q.push(x);
                dist[x]= dist[v]+1;
            }
        }
    }
    int index=0,maxd=0;
    for(int i=0;i<A.size();i++){
        if(maxd<dist[i]){
            index=i;
            maxd=dist[i];
        }
    }
    return index;
}
int bfs2(int u,vector<int> &A){
    int dist[200000];
    memset(dist,-1,sizeof(dist));
    queue<int> q;
    q.push(u); dist[u]=0;
    while(!q.empty()){
        int v= q.front(); q.pop();
        for(int i=0;i<adj[v].size();i++){
            int x= adj[v][i];
            if(dist[x]==-1){
                q.push(x);
                dist[x]= dist[v]+1;
            }
        }
    }
    int index=0,maxd=0;
    for(int i=0;i<A.size();i++){
        if(maxd<dist[i]){
            index=i;
            maxd=dist[i];
           // cout<< maxd<<endl;
        }
    }
    return maxd;
}
int Solution::solve(vector<int> &A) {
    
   if(A.size()==1) return 0;
    for(int i=0;i<A.size();i++){
        if(A[i]==-1) continue;
        else{
        adj[A[i]].push_back(i);
        adj[i].push_back(A[i]);
        }
    }
    int t1=0,t2=0;
    t1= bfs1(0,A); 
    //return t1;
    t2= bfs2(t1,A);
    return t2;
}
