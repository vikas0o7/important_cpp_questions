#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
double sum=0,result,k,m,t;
int main()
{
	io;
	int n; cin>>n>>k>>m;
	vector<double> a(n+5);
	for(int i=0;i<n;i++) {cin>>a[i]; sum+=a[i];}
	sort(a.begin(),a.end());
	result = sum/n;
	for(int i=0;i<n && m>=0;i++){
	 t+=a[i];
	 result=max(result, (sum-t+min(m--, (n-i)*k))/(n-i));
	 cout<<(result)<<endl;
	}
		  
	cout<< fixed<< setprecision(9)<<result<<endl;
	return 0;
}	