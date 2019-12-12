#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t; cin>>t;
	vector<string> res;
    string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    while(t--){
	    int n; cin>>n;
	    int x;
	    char digits[n];
	      for(int i=0;i<n;i++){
	        cin>>digits[i];  
	     }
	   res.push_back("");
	   for (int i = 0; i < digits.size(); i++)
        {
        vector<string> tempres;
        string chars = charmap[digits[i] - '0'];
        for (int c = 0; c < chars.size();c++)
            for (int j = 0; j < res.size();j++)
                tempres.push_back(res[j]+chars[c]);
        res = tempres;
         }
         for(auto i: res) cout<<i<<" ";
         cout<<endl;
	}
	
	
	return 0;
}