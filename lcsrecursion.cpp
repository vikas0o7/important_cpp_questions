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
int lcs(char *x, char *y, int m, int n){
	if(m==0 || n==0) return 0;
	if(x[m-1]==y[n-1]) return 1+ lcs(x,y,m-1,n-1);
	else return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
}
int main()
{
	io;
	char X[] = "angry"; 
 	char Y[] = "x"; 
  
  	int m = strlen(X); 
  	int n = strlen(Y); 
  	int l=lcs(X,Y,m,n);
  	cout<<l<<'\n';
	return 0;
}	