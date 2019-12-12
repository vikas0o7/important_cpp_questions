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
int main()
{
	io;
	int t;
	cin>>t;
	while(t--){
		int n,m; cin>>m>>n;
		int a[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		// for(int i=0;i<m;i++){
		// 	for(int j=0;j<n;j++) cout<< a[i]<<" ";
		// }
		int i,k=0,l=0;        // k to keep track of row and L to keep track of columns
		while(k<m  && l<n){
			for(i=l;i<n;i++)cout<<a[k][i]<<" ";
			k++;
			for(i=k;i<m;i++) cout<< a[i][n-1]<<" ";
			n--;
			if(k<m){
			for(i=n-1;i>=l;i--) cout<<a[m-1][i]<<" ";
			m--;}
			if(l<n){
			for(i=m-1;i>=k;i--) cout<<a[i][l]<<" ";
			l++;}
		}
		cout<<endl;
	}
	return 0;
}	