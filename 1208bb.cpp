#include <bits/stdc++.h>

using namespace std;

const int N = 2e3 + 5;
int a[N];
int j;
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }

    int ans = n - 1;
    map<int, int> freq; 
    for(int i=0;i<n;i++){
        bool validprefix=true;
        for(int j=0;j<i;j++){
            freq[a[j]]++;
            if(freq[a[j]]==2){
                validprefix=false;
                break;
            }
        }
        int min_suffix=n;
        for(int j=n-1;j>=i;--j){
            freq[a[j]]++;
            if(freq[a[j]]==1) min_suffix=j;
            else break;
        }
        if(validprefix) ans=min(ans, min_suffix-i);
        freq.clear();
    }
    cout<<ans<<endl;
    return 0;
}