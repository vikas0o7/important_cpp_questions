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
	int n; cin>>n;
	string a; cin>>a;
	map<char,int> cnt;
	int ans=1;
	for(int i=0;i<n;i++){
		if(a[i]=='R'){
			if(cnt['L']==0) cnt['R']++;
			else {
				cnt['L']=0; cnt['U']=0; cnt['D']=0;
				ans++;
				cnt['R']++;
			}
		}
		else if(a[i]=='L'){
			if(cnt['R']==0) cnt['L']++;
			else {
				cnt['R']=0;cnt['U']=0; cnt['D']=0;
				ans++;
				cnt['L']++;
			}
		}
		else if(a[i]=='U'){
			if(cnt['D']==0) cnt['U']++;
			else {
				cnt['D']=0;cnt['R']=0;cnt['L']=0;
				ans++;
				cnt['U']++;
			}
		}
		else if(a[i]=='D'){
			if(cnt['U']==0) cnt['D']++;
			else {
				cnt['U']=0;cnt['R']=0;cnt['L']=0;
				ans++;
				cnt['D']++;
			}
		}
		//error(ans)
	}
	cout<< ans;
	return 0;
}	