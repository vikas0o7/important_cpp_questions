#include<bits/stdc++.h>
using namespace std;

int cxy ={(0,-1),(0,1),(1,0),(-1,0)};
int main(){
   int n;
	    cin>>n;
	    int a[n][n];
	    int dist[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            dist[i][j]=INT_MAX; // initialise all distances to infinity
	            if(a[i][j]=='S'){
	                si=i;sj=j;
	            }
	            if(a[i][j])
	        }
	    }
	     dist[0][0]=a[0][0];
	     queue<pair<int,int> > q;
	     q.push({0,0});
	     while(!q.empty()){  // do bfs after inserting first cell in queue;
	         auto p= q.front(); q.pop();
	         for(int k=0;k<4;k++){
	             int i= p.first+ cxy[k][0]; // new coordinates
	             int j= p.second+cxy[k][1];
	             if(i>=0 && j>=0 && i<n && j<n && dist[i][j]> dist[p.first][p.second]+a[i][j]){
	                 dist[i][j]= dist[p.first][p.second]+ a[i][j];  // condition in if() to update the distance
	                 q.push(make_pair(i,j));
	             }
	         }
	     }
	    cout<< dist[n-1][n-1]<<endl; int n;
    cin>>n;
    char a[n][n];
    int si,sj,di,dj;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];

}