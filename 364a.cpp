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
ll sum[100][4001];
int main()
{
	io;
	int n; string s;
	cin>>n;
	cin>>s;
	//cout<<s[0]-'0';
	int a[100][4001];
	for(int i=1;i*i<=s.length();i++){
		for(int j=1;j<=s.length();j++){
			sum[i][j]=sum[i][j-1]+(s[i]-'0')*(s[j]-'0');
		}
	}
	int cnt=0;
	for(int i=1;i*i<=s.length();i++){
		int u=0;
		for(int j=1;j<=s.length();j++){
			if(sum[i][j]-sum[i][u]==n) ++cnt;
			else if(sum[i][j]-sum[i][u]<n) continue;
			else{
				while(sum[i][j]-sum[i][u]>n){
					++u;
					if(sum[i][j]-sum[i][u]==n) {++cnt; break;} //cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
	cout<<cnt*2;
	return 0;
}	