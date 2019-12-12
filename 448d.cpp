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
   ll n,m,k,l,r,mid;
   cin>>n>>m>>k;
   l=1; r=n*m;
   while(l<r){
    ll sum=0;
    mid= l+(r-l)/2;
    for(int i=1;i<=n;i++){
        sum+=min(mid/i,m);   /// no of numbers less than or equal to x in particular row= min(x/i,m);
    }
    if(sum<k) l=mid+1;      /// if such number count less than k, then increase lower end;
    else r=mid;             /// else decrease upper limit;
   }
   cout<<l;
}