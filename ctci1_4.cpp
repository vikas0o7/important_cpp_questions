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
	string s;
	getline(cin, s);
	//cout<<s<<endl;
	//transform(s.begin(),s.end(),s.begin() ,:: tolower); 
	//transform(s.begin(),s.end(),s.begin(), ::tolower);
	unordered_map<char,int> m;
	for(int i=0;i<s.length();i++){
		if(s[i]!=' ') {
			if(s[i]<97) s[i]+=32;
			//cout<< char(s[i]);
			m[s[i]]++;
		}
	}
	int cnt1=0,cnt2=0,no_of_chars=0;
	for(auto i:m){
		if(i.second%2==0) cnt2++;
		else cnt1++;
		no_of_chars+=i.second;
	}
	if((no_of_chars%2==0 && cnt1==0  )|| (no_of_chars%2==1 && cnt1==1)) cout<<1;
	else cout<<0;

	return 0;
}	