#define mp make_pair
#define f first
#define s second
int Solution::knight(int n, int m, int x1, int y1, int x2, int y2) {
    int i,j;
    int vis[n+1][m+1];
    int dp[n+1][m+1];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            vis[i][j]=0;
        }
    }
    vis[x1][y1]=1;
    dp[x1][y1]=0;
    queue<pair<int,int> > q;
    q.push(mp(x1,y1));
    while(!q.empty()){
        int u=q.front().f;
        int v=q.front().s;
        if(u==x2&&v==y2)return dp[u][v];
        q.pop();
        if(u-1>=1&&v-2>=1&&vis[u-1][v-2]==0){
            vis[u-1][v-2]=1;
            dp[u-1][v-2]=dp[u][v]+1;
            q.push(mp(u-1,v-2));
        }
        if(u-2>=1&&v-1>=1&&vis[u-2][v-1]==0){
            vis[u-2][v-1]=1;
            dp[u-2][v-1]=dp[u][v]+1;
            q.push(mp(u-2,v-1));
        }
        if(u-1>=1&&v+2<=m&&vis[u-1][v+2]==0){
            vis[u-1][v+2]=1;
            dp[u-1][v+2]=dp[u][v]+1;
            q.push(mp(u-1,v+2));
        }
        if(u-2>=1&&v+1<=m&&vis[u-2][v+1]==0){
            vis[u-2][v+1]=1;
            dp[u-2][v+1]=dp[u][v]+1;
            q.push(mp(u-2,v+1));
        }
        if(u+1<=n&&v-2>=1&&vis[u+1][v-2]==0){
            vis[u+1][v-2]=1;
            dp[u+1][v-2]=dp[u][v]+1;
            q.push(mp(u+1,v-2));
        }
        if(u+2<=n&&v-1>=1&&vis[u+2][v-1]==0){
            vis[u+2][v-1]=1;
            dp[u+2][v-1]=dp[u][v]+1;
            q.push(mp(u+2,v-1));
        }
        if(u+2<=n&&v+1<=m&&vis[u+2][v+1]==0){
            vis[u+2][v+1]=1;
            dp[u+2][v+1]=dp[u][v]+1;
            q.push(mp(u+2,v+1));
        }
        if(u+1<=n&&v+2<=m&&vis[u+1][v+2]==0){
            vis[u+1][v+2]=1;
            dp[u+1][v+2]=dp[u][v]+1;
            q.push(mp(u+1,v+2));
        }
    }
    return -1;
}

