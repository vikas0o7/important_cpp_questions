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
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int L[n],R[n];
		int lmax=a[0],rmax=a[n-1];
		L[0]=-1; R[n-1]=-1;
		for(int i=1;i<n;i++){
			if(a[i]<lmax){
				L[i]=lmax;
			}
			else {L[i]=-1; lmax=a[i];}
		}
		for(int i=n-2;i>=0;i--){
			if(a[i]<rmax) R[i]=rmax;
			else {R[i]=-1; rmax=a[i];}
		}	
		ll ans=0;
		for(int i=0;i<n;i++){
			if(R[i]!=-1 && L[i]!=-1){
				ans+=min(L[i],R[i])- a[i];
			}
		}
		//for(int i=0;i<n;i++) error(i,R[i])
		cout<<ans<<endl;
	}
	return 0;
}	