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
int f[100005],n,val=-1;
vector<int> v;
int main()
{
	io;
	cin>>n;
	for(int i=0,a,b;i<n-1;i++){
		cin>>a>>b;
		f[a]++; f[b]++;
	}
	for(int i=1;i<=n;i++){
		if(f[i]>2){
			if(val!=-1){
				cout<<"No"; return 0;
			}
			val=i;
		}
		if(f[i]==1) v.pb(i);
	}
	//for(auto I:v) cout<< I;
	cout<<"Yes"<<endl;
	if(val==-1) {val=v.back(); v.pop_back();}
	cout<< v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<< val<<" "<< v[i]<<endl;
	}
	return 0;
}	