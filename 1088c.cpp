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
int n; int a[2005];
int main()
{
	io;
	cin>>n;
	int diff=INT_MAX;
	//a[0]=INT_MIN;
	int temp=a[0];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
		temp=a[i];
		//diff= min(diff, a[i]-temp);
		a[i]=1000000;
		//cout<<diff<<endl;
	}

	if(n==1){
		cout<<0; return 0;
	}
	cout<< n+1<<endl;
	cout<< 2<<" "<< n<<" "<< 1<<endl;
	cout<<1 <<" "<< n<<" "<< 1000000<<endl;
	for(int i=1;i<=n-1;i++){
		//cout<<(a[i]= a[i]%(1000000-i))<<endl;
		cout<< 2<<" "<< i<<" "<< 1000000-i<<endl;
	}

	return 0;
}	