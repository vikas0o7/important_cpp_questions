
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
	int n,k; string s;
	cin>>n>>k;
	cin>>s;
	//cout<<s;
	map<char,int> m,cnt;
	int ans=-1;
	cnt[s[0]]=1; 
	if(n==1 && k==1){cout<<1; return 0;}
		for(int i=1;i<n;i++){
		//error(cnt[s[i]])
		if(s[i]==s[i-1])++cnt[s[i]];
		else{ cnt[s[i-1]]=0; ++cnt[s[i]];}
		error(cnt[s[i]])
		//error(cnt[s[i]]);
		if(cnt[s[i]]==k){
			//char c=s[i];
			++m[s[i]];
			error(m[s[i]])
				cnt[s[i]]=0;
				ans=max(ans,m[s[i]]);
		}
		//error(cnt[s[i]],m[s[i]]);
	}
	cout<<ans;
return 0;
}	
	