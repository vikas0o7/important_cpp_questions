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
// void clear( std::queue<int> &q )
// {
//    std::queue<int> empty;
//    std::swap( q, empty );
// }
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		bool vis[10][10];
		for(int i=0;i<10;i++){vis[i][0]=true; vis[0][i]=true;vis[9][i]=true;vis[i][9]=true;}
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++) vis[i][j]=false;
		}	
		int r,c,k;
		cin>>r>>c>>k;
		vis[r][c]=true;
		int sum=1;
		queue<pair<int,int> > q1,q2;
		q1.push({r,c});
		while(k--){
			while(!(q1.empty())){
				pair<int,int> p= q1.front(); q1.pop();
				int x= p.first; int y=p.second;
				if(vis[x][y+1]==false){
					vis[x][y+1]=true;sum++;
					q2.push({x,y+1});
				}
				if(vis[x+1][y+1]==false){
					vis[x+1][y+1]=true;sum++;
					q2.push({x+1,y+1});
				}
				if(vis[x-1][y+1]==false){
					vis[x-1][y+1]=true;sum++;
					q2.push({x-1,y+1});
				}
				if(vis[x][y-1]==false){
					vis[x][y-1]=true;sum++;
					q2.push({x,y-1});
				}
				if(vis[x-1][y-1]==false){
					vis[x-1][y-1]=true;sum++;
					q2.push({x-1,y-1});
				}
				if(vis[x+1][y-1]==false){
					vis[x+1][y-1]=true;sum++;
					q2.push({x+1,y-1});
				}
				if(vis[x-1][y]==false){
					vis[x-1][y]=true;sum++;
					q2.push({x-1,y});
				}
				if(vis[x+1][y]==false){
					vis[x+1][y]=true;sum++;
					q2.push({x+1,y});
				}
			}	
			while(!(q2.empty())){
					pair<int,int> p2= q2.front();
					int l=p2.first; int r=p2.second;
					q1.push({l,r});
					q2.pop();
		}	

		}
		cout<<sum<<'\n';
	}
	return 0;
}	