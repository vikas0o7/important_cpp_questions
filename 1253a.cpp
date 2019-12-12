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
	int t; cin>>t;
	while(t--){
		int n; cin>>n; bool flag=true;
		int a[n],b[n],d[n];
		memset(d,0,n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>b[i];
			
		}
		for(int i=0;i<n;i++){
			d[i]=b[i]-a[i];
			//error(d[i])
			if(d[i]<0) {
				cout<<"NO"<<endl; flag=false ; break;
			}
		} 
		int i, j;
		if(flag==false){
			continue;
		}
		for( i=0;i<n;i++){
			if(d[i]==0) continue;
			else break;
		}
		for( j= n-1;j>=0;j--){
			if(d[j]==0)  continue;
			else break;
		}//error(i,j)
		set<int> s;
		while(i<=j){
			s.insert(d[i]);
			if(s.size()>1){
				cout<<"NO"<<endl; flag=false ; break;
			}
			i++;
		}
		if(flag)cout<< "YES"<<endl;
		//vikash:	continue;
	}
	return 0;
}	