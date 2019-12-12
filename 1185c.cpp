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
	int n,m; cin>>n>>m;
	vector<int> a(n);
	priority_queue<int> pq;
	ll sum[n];
	//sum[0]
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0)sum[i]=sum[i-1]+a[i];
		sum[0]=a[0];
	}
	vector<int> v;
	multiset<int, greater<int> > st;
	for(int i=0;i<n;i++){
		ll temp= sum[i];
		int cnt=0; 
		if(temp<= m) {v.pb(0); }
		//stack<int>ans;
		// while(temp> m  && !pq.empty()){
		// 	int u= pq.top();
		// 	//ans.push(pq.top());
		// 	//pq.pop(); 
		// 	ans.push(u);
		// 	pq.pop();
		// 	cnt++;
		// 	temp-=u;
		// 	if(temp<= m) {v.pb(cnt); break;}
		// }
		else{
			for(auto itr= st. begin(); itr!= st.end();itr++){
			temp-=*itr; cnt++;
			if( temp<= m ) {v.pb(cnt); break;}
		}
	}
		st.insert(a[i]);
		pq.push(a[i]);
		// while(!ans.empty()){
		// 	//cout<<ans.top();
		// 	pq.push(ans.top()); ans.pop();
		// }

	}		
	for(auto it: v) cout<<it<<" ";

	return 0;
}	