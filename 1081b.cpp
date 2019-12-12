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
bool cmp(pair<int,int> &a, pair<int,int> &b){
	return a.second< b.second;
}

int main()
{
	io;
	int n; cin>>n;
	vector<pair<int,int> > a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].first; a[i].second=i;
	}
	int cnt=1;
	sort(a.begin(),a.end());
	for(int i=0;i<n;){
		int l= n-a[i].first;
		for(int k=1;k<=l;k++){
			if(a[i].first!= n-l){
				cout<<"Impossible"; return 0;
			}
			a[i++].first= cnt;
		}
		cnt++;
	}
	sort(a.begin(),a.end(),cmp);
	cout<<"Possible"<<'\n';
	for(int i=0;i<n;i++){
		cout<< a[i].first<<" ";
	}
	return 0;
}	