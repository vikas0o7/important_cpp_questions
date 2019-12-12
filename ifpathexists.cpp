#include<bits/stdc++.h>
using namespace std;
# define f first
# define s second

const int cxy[4][2] = { {1,0}, {0,1}, {-1,0}, {0,-1} };
 int main()
 {
    int T;
	cin >> T;
	while(T--) {
	    int m, n;
	    cin >>n;
	    m=n;
	    int a[21][21];
	    for(int i = 0; i < m; i++) {
	        for(int j = 0; j < n; j++)
	            cin >> a[i][j];
	    }
	     bool vis[n][n];
	    memset(vis,false,sizeof(vis));
	    bool done=false;
	    
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<n;j++){
	    		if(a[i][j]==1) 
	    			
	    	}
	    }