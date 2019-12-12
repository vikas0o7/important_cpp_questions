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
	int n;
	double x,y; cin>>n>>x>>y;
	double a[n][2];
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	set<double> s;
	bool flag=false;
	for(int i=0;i<n;i++){
		
			if(a[i][0]!=x){double slope= (a[i][1]-y)/ (a[i][0]-x);s.insert(slope);}
			else flag=true;

		
	}
	if(flag==true) cout<< s.size()+1;
	else cout<< s.size();
	return 0;
}	