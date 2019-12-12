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
int C[11][11];
void binomial(){
	for(int i=0;i<=10;i++){
		for(int j=0;j<=i;j++){
			if(j==0 || j==i){
				C[i][j]=1;
			}
			else{
				C[i][j]=C[i-1][j] + C[i-1][j-1];
			}
		}
	}
}

int main()
{
	//io;
	string s, t;
	cin>>s>>t;
	int sum1=0, sum2=0,cnt=0;
	double probability=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='+') sum1++;
		else sum1--;
	}
	for(int i=0;i<t.length();i++){
		if(t[i]=='+') sum2++;
		else if(t[i]=='-') sum2--;
		else cnt++;
	}
	int num=abs(sum1-sum2);
	if(abs(sum1-sum2)>cnt || (num%2==0 && cnt%2==1) ||(num%2==1 && cnt%2==0) ){
		cout<< fixed<< setprecision(10)<< probability ;
		return 0;
	}
	binomial();
	//num=abs(sum1-sum2);
	num = num + abs(cnt-num)/2;

	int x= C[cnt][num];
	//cout<< C[2][1]<<endl;
	int total = pow(2, cnt);
	//error(x, total);
	probability= (float)x/total;
	cout<< fixed<< setprecision(10)<< probability;
	return 0;
}	