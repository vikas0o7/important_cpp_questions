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
int n,m, a[55][55],b[55][55];
int main()
{
	io;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	vector<pair<int,int> > v;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=m-1;j++){
			if(a[i][j]==1 && a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1){
				b[i][j]=1 ;b[i+1][j]=1 ; b[i][j+1]=1 ; b[i+1][j+1]=1;
				v.push_back({i,j});
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=b[i][j]){
				cout<<-1;
				return 0;
			}
		//	cout<< b[i][j]<<" ";
		}
	}
	//cout<< b[3][3];
	cout<< v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<< v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
}	