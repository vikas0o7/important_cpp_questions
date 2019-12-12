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
	int t; cin>>t;
	while(t--){
		int n,k,x,y; cin>>n>>k;
		int l[100005],r[100005],cnt[100005],cntplus[100005],a[100005],change[100005];
		int sum=0;
		for(int j = 1 ; j <= 100000 ; j++) a[j] = 0;
		for(int i=1;i<=n;i++){
			cin>>l[i]>>r[i];
			 x=l[i]; y=r[i];
			a[x]++; a[y+1]--;
		}
		for(int i=1;i<=100000;i++){
			a[i]+=a[i-1];
			//cout<<a[i]<<endl;
			cnt[i]=cnt[i-1];
			cntplus[i]=cntplus[i-1];
			if(a[i]==k) {cnt[i]+=1;sum++;}
			else if(a[i]==k+1) cntplus[i]+=1;
			//cout<<cntplus[i]<<" ";
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			int c= l[i]; int d=r[i];
			ans=max(ans,cnt[100000]-cnt[d]+cnt[c-1]+cntplus[d]-cntplus[c-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}	