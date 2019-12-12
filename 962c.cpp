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
string s, s2;
int ans=25, y,x, cnt=0;
int main()
{
  io;
  cin>>s;
  for(int i=1;i<=45000;i++){
    cnt=0;
    x= i*i;
    s2= to_string(x);
    for(int j=0;j<s.size();j++){
      if(s[j]== s2[cnt]) cnt++;
    }
    y= s.size()-s2.size();
    if(cnt==s2.size()) ans= min(y,ans);
  }
  if(ans==25) ans=-1;
  cout<<ans;
  return 0;
}  