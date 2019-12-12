#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<int, vector<pair<int,int> > > sum;
        vector<vector<int> > ans; vector<int> temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x= v[i]+v[j];
                sum[x].push_back({v[i],v[j]});
                cout<< x<<" " <<v[i]<<" "<<v[j]<<endl;
            }
        }
        for(auto i: sum){
            vector<pair<int,int> > a = i.second;
            int r= i.first;
            if(sum.find(k-r)!=sum.end()){
                auto it= sum.find(k-r);
                vector<pair<int,int> > b= it->second;
                for(auto l: sum){
                    for(auto m: sum){
                        temp.push_back(l.second[i].first);
                    }
                }
            }
        }

        for(int i=0;i<ans.size();++i){
            sort(ans[i].begin(),ans[i].end());
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();i++){
                cout<<ans[i][j]<<" ";
            }
            cout<< "$";
        }
        cout<<endl;
    }
    
    
    return 0;
}