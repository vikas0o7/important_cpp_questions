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
map<int,int> cnt;
int sum=0;
int main()
{
	io;
	int n; cin>>n;
	vector<int> a(n); vector<char> ans(n,'X');
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(auto i: cnt){
		if( i.second==2) sum+=2;
		else sum+=1;
	}
	if(sum%2!=0){
		cout<<"NO"; return 0;
	}
	cout<<"YES"<<endl;
	int k= sum/2;
	set<int> s;
	for(int i=0;i<n && k>0 ;i++){
		if(s.find(a[i])==s.end()){
			ans[i]='A';
			k--;
			s.insert(a[i]);
		}
	}
	k=sum/2;
	for(int i=0;i<n && k>0;i++){
		if(ans[i]!='A') ans[i]='B',k--;
		
	}
	for(int i=0;i<n;i++){
		if(ans[i]=='X') ans[i]='A';
	}
	for(int i=0;i<n;i++) cout<< ans[i];
	return 0;
}	