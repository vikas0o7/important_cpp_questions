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
int parent[205000];
int find(int i){
	if(parent[i]) return parent[i]= find(parent[i]);
	return i;
}
void merge(int x, int y){
	x= find(x);
	y=find (y);
	if(x==y) return ;
	parent[y]=x; // we are storing all elements from i (which is 1 to n)
}
int main()
{
	io;
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		string a; cin>>a;
		for(int j=0;j<a.length();j++){
			merge(i, n+ a[j]);  // n is added to prevent clash if i comes to 97 which is ascii code for a, where alphabet begins.
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(i==find(i)) ++ans;
		//error(i,find(i));
	}
	cout<<ans;
	return 0;
}	