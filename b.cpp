#include <bits/stdc++.h>
#define FOR(i,a,b) for (int i=a;i<b;i++)
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;

stack<char> st;
int numturns = 0;
string s;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> s;
	FOR(i,0,s.size()){
		if (st.empty() || st.top() != s[i]){
			st.push(s[i]);
		} else {
			st.pop();
			numturns++;
		}
	}
	cout << (numturns % 2 == 1 ? "Yes" : "No") << '\n';
	return 0;
}