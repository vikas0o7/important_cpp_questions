#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
int main()
{
	io;
	int n,m; cin>>n>>m;
	vector<int> t(n);
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	vector<int> cnt(101,0);
	int sum=0; 
	for(int i=0;i<n;i++){
		int d= sum+ t[i]-m;   // required extra time for completion
		int y,k=0;
		if(d>0){
			for(int j=100;j>=1;j--){
				int x= j* cnt[j];
				if(x>=d){           // if this j(time) will be enough but not all occurence of this time. so we will find relevant no. of counts
					k+=(d+j-1)/j; break;
				}
				d-=x;
			k+= cnt[j];
			}

		}
		sum+=t[i];
		cnt[t[i]]++;
		cout<< k<<" ";
	}
	return 0;
}	