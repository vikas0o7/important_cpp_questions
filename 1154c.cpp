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
int a,b,c,ans,x,temp;
int idx[7]={1,2,3,1,3,2,1};
int main()
{
	io;
	cin>>a>>b>>c;
	x= min(a/3,min(b/2,c/2));
	a= a-(x*3); b=b-(x*2); c=c-(x*2);
	ans=x*7;
	//error(a,b,c)
	for(int i=0;i<7;i++){
		int tempa=a,tempb=b,tempc=c,cnt=0,j=i;
		while(tempa>0|| tempb>0|| tempc>0){
			if(idx[j]==1){
				if(tempa>0){tempa--; 
				}
				else{
					break;
				}
			}
			else if(idx[j]==2){
				if(tempb>0) {
					tempb--; 
				}
				else break;
			}
			else{
				if(tempc>0){
					tempc--; 
				}
				else break;
			}
			cnt++; j++;
			if(j==7) j=0;
		}
		temp=max(temp,cnt);
	}
	cout<< ans+temp;
	return 0;
}	