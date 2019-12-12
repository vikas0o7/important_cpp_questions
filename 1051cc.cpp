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
ll sum; set<int> s;
map<int,int> cnt;
int main()
{
	io;
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(auto i: cnt){
		if( i.second==2) sum+=2;
		else sum+=1;
	}
	//error(sum)
	if(sum%2!=0){
		cout<<"NO"; return 0;
	}
	cout<<"YES"<<endl;
	set<int> s;
	int ka=sum/2; int kb=sum/2;
	vector<char> ans(n,'X');
	map<int,char> idx;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==2 && s.find(a[i])==s.end()){
			ans[i]='A'; ka--;
			s.insert(a[i]);
		}
		else if(cnt[a[i]]==2 && s.find(a[i])!=s.end()){
			ans[i]='B'; kb--;
		}
	}
	for(int i=0;i<n && ka>0;i++){
		if(cnt[a[i]]==1 ){
			ka--;
			ans[i]='A';
			s.insert(a[i]);
		}
	}
	for(int i=0;i<n && kb>0;i++){
		if(cnt[a[i]]==1 && ans[i]!='A'){
			kb--;
			ans[i]='B';
			s.insert(a[i]);
		}
		//cout<< ans[i];
	}
	for(int i=0;i<n;i++){
		if(s.find(a[i])==s.end()){
			if(ka>0){
				ans[i]='A';
				idx[a[i]]='A';
				s.insert(a[i]); ka--;
			}
			else if(kb>0){
				ans[i]='B';
				idx[a[i]]='B'; kb--;
			}
		}
		// else if(cnt[a[i]]>2){
		// 	if(idx[a[i]]='A'){
		// 		ans[i]='B';
		// 	}
		// 	else ans[i]='A';
		// }
	}
	for(int i=0;i<n;i++){
		if(ans[i]=='X'){
			if(idx[a[i]]=='A') ans[i]='B';
			else ans[i]='A';
		}
	}
	for(auto i: ans) cout<<i;
	return 0;
}	