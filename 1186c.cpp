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
	string a, b,c ;
	cin>>a>>b;
	int cnt=0;
	int m=b.length();
	int n=a.length();
	int ones[n+1], zeros[n+1];
	for(int i=0;i<n;i++){
		ones[i]=0;
	}
	int cnt1=0, cnt2=0;
	for(int i=1;i<=a.length();i++){
		if(a[i-1]=='1') {
			++ cnt1;
			}
			ones[i]=cnt1;
			//error(i,ones[i])
	}
	int zerocnt=0, onecnt=0;
	for(int i=0;i<m;i++){
		if(b[i]=='1') onecnt++;
		
	}
	//error(onecnt)
	int x=0;
	ones[0]=0;
	for(int i=m;i<n;i++){
		
		int temp= ones[i]- ones[i-m];
		//error(temp, onecnt)
		if(temp%2==0 && onecnt%2==0) x++;
		else if(temp%2==1 && onecnt%2==1) x++;
		//error(i,x)
	}
	cout<< x;
	return 0;
}	