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
bool isprime(int n){
    if(n==2|| n==3 || n==5|| n==7) return true;
    return false;
}
int dp[10][100002];   // state, kth digit;
const int mod= 1000000007;
void fn(){
    for(int i=1;i<10;i++){
        dp[i][1]=1; // 1 digit possible of length 1 ending with i;
    }
    for(int i=2;i<=100000;i++){
        for(int j=0;j<10;j++){   //  j is last digit
            for(int k=0;k<10;k++){ // k is second last digit;
                if(isprime(abs(j-k))){
                    dp[j][i]= (dp[j][i]+ dp[k][i-1])%mod;
                }
            }
        }
    }
}
int main()
{
    io;
    int t; cin>>t;
    fn();
   // cout<< dp[2];
    while(t--){
        int n;
        cin>>n;
      int ans=0;
      for(int i=0;i<10;i++){
        ans= (ans+ dp[i][n])%mod;
      }
      cout<<ans<<endl;
    }
    return 0;
}    