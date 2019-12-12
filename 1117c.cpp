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
int up,dn,lt,rt;
int main()
{
	io;
	int n,x1,x2,y1,y2, a=0,b=0; string s;
	cin>>x1>>y1; 
	cin>>x2>>y2; cin>>n;
	cin>>s;
	a=x1; b=y1;
	int i,day=0;
	for(int i=0;i<n;i++){
		if(s[i]=='U') up++;
		else if(s[i]=='D') dn++;
		else if(s[i]=='L') lt++;
		else rt++;
	}
	//if(left>right )
	int xdif= (x2-x1); 
	int ydif=(y2-y1);
	// if((ydif>0 && up==0) ||(ydif<0 && dn==0) ||(xdif>0 && rt==0) ||(xdif<0 && lt==0)){
	// 	cout<<-1; return 0;
	// }
	
	if(xdif==0 ){
		if(ydif>0){
			if(up==0) {cout<<-1; return 0;}
		}
		else if(ydif<0){
			if(dn=0){cout<<-1;return 0;}
		}
	}  
	if(ydif==0 ){
		if(xdif>0){
			if(rt==0) {cout<<-1; return 0;}
		}
		else if(xdif<0){
			if(lt=0){cout<<-1;return 0;}
		}
	}
	while(a!=x2 || b!=y2){
		day++;
		i= (day%(n))-1;
		if(i==-1) i=n-1;
		if(s[i]=='U'){
			if(y2>b){
				if(x2>a) b++, a++;
				else if(x2<a) b++, a--;
				else if(y2>=b+2){
					b=b+2;
				}
				else if(y2=b+1){
					b=b+1;
				}
				
			}
			
		}
		else if(s[i]=='D'){
			if(y2<b){
				if(x2>a) b--,a++;
				else if(x2<a)b--, a--;
				else if(b>=y2+2){
					b=b-2;
				}
				else if(b=y2+1){
					b=b-1;
				}
				
			}
			
		}
		else if(s[i]=='R'){
			if(x2>a){
				if(y2>b) a++,b++;
				else if(y2<b) a++,b--;
				else if(x2>=a+2){
					a=a+2;
				}
				else if(x2=a+1){
					a=a+1;
				}
				
			}
			
		}
		else if(s[i]=='L'){
			if(x2<a){
				if(y2>b) a--,b++;
				else if(y2<b)a--, b--;
				else if(a>=x2+2){
					a=a-2;
				}
				else if(a=x2+1){
					a=a-1;
				}
				
			}
			
		}
		//cout<<a<<" "<<b<<" "<<day<<endl;
	}
if(day>0)	cout<<day;
else cout<<-1;
	return 0;
}	