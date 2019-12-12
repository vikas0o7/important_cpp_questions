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
	string s,t;
	cin>>s>>t;
	bool flag=true;
	if(s.length()!=t.length()){cout<<"No"; return 0;}
	int v1=0, c1=0,v2=0,c2=0;
	for(int i=0;i<s.length();i++){
		if((s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u') && (t[i]=='a' || t[i]=='e'|| t[i]=='i'|| t[i]=='o'|| t[i]=='u') )
			continue;
		else if((s[i]!='a' && s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u') && (t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o'&& t[i]!='u') )
			{
				continue;
			}
		else {
			flag=false; break;
		}
	}
	if(flag==true) cout<<"Yes";
	else cout<<"No";
	return 0;
}	