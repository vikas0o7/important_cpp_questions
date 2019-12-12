#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<utility>
#include<set>
#include<stack>
#include<list>
#include<deque>
#include<bitset>
#include<iomanip>
#include<cstring>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<cmath>
#include<cctype>


#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define ren(i,a,b) for(int i=a;i>=b;i--)
#define ff first
#define ss second
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define vll vector<long long int>
#define vii vector<int>
#define gi(n) scanf("%d",&n)
#define gll(n) scanf("%lld",&n)
#define gstr(n) scanf("%s",n)
#define gl(n) cin >> n
#define oi(n) printf("%d",n)
#define oll(n) printf("%lld",n)
#define ostr(n) printf("%s",n)
#define ol(n) cout << n
#define os cout<<" "
#define on cout<<"\n"
#define o2(a,b) cout<<a<<" "<<b
#define all(n) n.begin(),n.end()
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
typedef vector<vector<ll> > mat;

int c[105]={0};

int main()
{ios_base::sync_with_stdio(false);
int n,m,s1=0;
cin>>n>>m;


rep(i,0,n-1)
{
	int x;
	cin>>x;
	s1+=x;
	
	if(s1<=m)
	{
		ol("0 ");
		c[x]++;
		continue;
	}
	ll s2=s1;
	int cnt=0;

	ren(ii,100,0)
	{
		s2-=c[ii]*ii;
		if(s2<=m)
		{
			//o2(cnt,(s2+ii-1)/ii);
			cnt+=((s2+c[ii]*ii-m)+ii-1)/ii;
			break;
		}
		cnt+=c[ii];
	}
	ol(cnt);os;
	c[x]++;
}
return 0;
}