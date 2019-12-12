#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
string v[100];

void dfs(int i, int j, bool vis[][55]){
	if(i<0 || j<0|| i>=n || j>=m || vis[i][j]==true || v[i][j]!='X') return ;
	else{
    vis[i][j]=true; v[i][j]='O';
   // cout<< 1<<endl;
    dfs(i+1,j,vis);
    dfs(i,j+1,vis);
    dfs(i,j-1,vis);
    dfs(i-1,j,vis);
    }
}
int main()
 {
	int t; cin>>t;
	while(t--){
	    int n,m;
	   // v.clear();
	    
	    cin>>n>>m;
	    //vector<string> v;
	    bool vis[55][55];
	    for(int i=0;i<n;i++){
	    	cin>>v[i];
	    }
	    int ans=0;
	    
	    memset(vis,false,sizeof(vis));
	    for(int a=0;a<n;a++){
	        for(int b=0;b<m;b++){
	            if(v[a][b]=='X' && vis[a][b]==false){
	                
	                dfs(a,b,vis);
	                ans++;
	            }
	        }
	    }
	    // for(int i=0;i<n;i++){
	    // 	for(int j=0;j<m;j++) cout<< vis[i][j]<<endl;
	    // }
	    cout<<ans<<endl;
	}
	
	
	return 0;
}