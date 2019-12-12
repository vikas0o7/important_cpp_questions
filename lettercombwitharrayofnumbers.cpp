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

vector<string> hashmap= {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void Util(string &temp, vector<string> &ans, vector<int> &A, int start){
		if(start==A.size()){
			//cout<< temp<<endl;
                ans.push_back(temp);
                return ;
            }
   
        string s= hashmap[A[start]];
        //cout<<s;
        for(int j=0;j<s.length();j++){
            temp+=s[j];
           // cout<< temp<<" "<<start<<endl;
            Util(temp,ans, A, start+1);
            temp.pop_back();
        }
    
}

vector<string> letterCombinations(vector<int> &A) {
    string temp="";
    vector<string> ans;
    Util(temp,ans,A,0);
    return ans;
}
int main()
{
	io;
    int n; cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	vector<string> res= letterCombinations(A);
	for(auto r:res) cout<<r<<endl;
	
	return 0;
}	