#include <bits/stdc++.h>
using namespace std;
void Util(vector<int> &A, vector<vector<int> >&ans, int begin){
    if(begin>= A.size()){
        for(auto j:A) cout<< j<<" "; cout<<endl;
        ans.push_back(A); return ;
    }
    for(int i=begin;i<A.size();i++){
        swap(A[i],A[begin]);
        Util(A,ans,begin+1);
        swap(A[i],A[begin]);
    }
}

vector<vector<int> > permute(vector<int> &A) {
    vector<vector<int> > ans;
    Util(A, ans, 0);
    return ans;
}

int main() {
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> x= permute(a);
    // for(int i=0;i<x.size();i++){
    //     for(int j=0;j<x[0].size();j++) cout<< x[i][j];
    //     cout<<endl;    
    // }    
    return 0;
}    