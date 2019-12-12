typedef pair<int,int> ii;
const int inf= INT_MAX;
int Solution::solve(int A, vector<vector<int> > &B) {
    int m= B.size();
    vector<int> dist(A+1, inf);
    vector<pair<int,int> > adj[200000];
    for(int i=0;i<B.size();i++){
        int x= B[i][0]; int y= B[i][1]; int z= B[i][2];
        adj[x].push_back({z,y}); adj[y].push_back({z,x});
    }
    ///memset(dist, INT_MAX, sizeof(dist));
    bool vis[A+1];
    memset(vis,false,sizeof(vis));
    priority_queue<ii,vector<ii> , greater<ii> > pq;
    pq.push({0,1});
    dist[1]=0;
    while(!pq.empty()){
        int u= pq.top().second;
        int weight= pq.top().first; pq.pop();
        vis[u]=true;
        for(int i=0;i<adj[u].size();i++){
            int v= adj[u][i].second;
            int cost= adj[u][i].first;
            if(!vis[v] && dist[v]> cost){
                dist[v]=cost;
                pq.push({dist[v],v});
            }
        }
    }
    int sum=0;
    for(int i=1;i<=A;i++){
        sum+=dist[i];
    }
    return sum;
}
