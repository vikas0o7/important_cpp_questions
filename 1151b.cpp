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
int a[505][505],b[505],sum;
int n,m; 
void pr(){
	cout<<"TAK"<<endl;
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	exit(0);
}
int main()
{
	io;
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		sum^=a[i][1];
		b[i]=1;
	}
	//cout<<sum<<endl;
	if(sum!=0) pr();
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(a[i][j]!=a[i][1]){
				b[i]= j;
				pr();
			}
		}
	}
	cout<<"NIE";
	return 0;
}	