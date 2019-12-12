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
const int N = 105;     
char mat[4][N][N];
int value[4];
int n;
int main()
{
	io;
	cin>>n;
	for(int id=0;id<4;id++){
		for(int i=0;i<n;i++) cin>> mat[id][i];

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if((i+j)%2!=mat[id][i][j]-'0'){
					value[id]++;
				}
				//cout<< mat[id][i][j];
			}
		}	
		///cout<<value[id]<<endl;
	}
	sort(value,value+4);// first 2 zeroes will be together. 
	cout<< value[0]+value[1]+n*n- value[2]+ n*n-value[3]<<endl; 
	//// because for last 2 matrices, we are comparing with zero instead of comparing with '1';
	// that's why subtracting from n^2;
	return 0;
}	