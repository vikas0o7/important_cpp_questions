#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
int n,r1,c1,r2,c2 ;
char b[60][60];
int a[60][60];
set<pair<int,int> >  s;
set<pair<int,int> >  t;
bool vis[60][60];
int x[4]={1,0,0,-1};
int y[4]={0,1,-1,0};

void dfs1(int r, int c){
	vis[r][c]=true;
	s.insert({r,c});
	for(int i=0;i<4;i++){
		int newx= r-+x[i],newy=c-+ y[i];
		if(newx>0 && newy>0 && newx<=n && newy<=n && a[newx][newy]==0 && vis[newx][newy]==false){
			//error(newx,newy)
			dfs1(newx,newy);
		}
	}
}
void dfs2(int r, int c){
	vis[r][c]=true;
	t.insert({r,c});
	for(int i=0;i<4;i++){
		int newx= r-0+x[i],newy=c-0+ y[i];
		if(newx>=1 && newy>=1 && newx<=n && newy<=n && a[newx][newy]==0 && vis[newx][newy]==false){
			
			dfs2(newx,newy);
		}
	}
}

int main()
{
	io;
	cin>>n;
	cin>>r1>>c1>>r2>>c2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) {
			cin>>b[i][j];
			a[i][j]=b[i][j]-'0';
			//cout<< a[i][j]+2;
		}
		//cout<<endl;
		}
	
	memset(vis,0,sizeof(vis));
	dfs1(r1,c1);
	//memset(vis,0,sizeof(vis));
	dfs2(r2,c2);
	int ans=INT_MAX;
	//cout<< vis[1][1];
	//for(auto i: t) cout<< i.first<<" "<<i.second<<endl;
	for(auto i: s){
		for(auto j:t){
			//error(j.first,j.second)
			int p= pow(i.second-j.second,2)+ pow(i.first-j.first,2);
			ans=min(ans,p);
		}
	}
	cout<<ans;
	return 0;
}	