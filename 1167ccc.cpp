#include<bits/stdc++.h>
using namespace std;
int i,n,m,k,pre[500005],siz[500005],a[500005];
int fin(int x){
	if(pre[x]==x) return x;
	else return (pre[x]=fin(pre[x]));
}
void uni(int x,int y){
	if(fin(x)!=fin(y)){
		siz[fin(x)]+=siz[fin(y)];
		pre[fin(y)]=fin(x);
	}
}
int main()
{
	//io;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		pre[i]=i;
		siz[i]=1;
	}
	while(m--){
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			uni(a[i],a[1]);
		}
	}
	for(int i=1;i<=n;i++) cout<< siz[fin(i)]<<" ";
	return 0;
}	