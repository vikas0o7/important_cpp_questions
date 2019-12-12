#include <bits/stdc++.h>
     
    using namespace std;
     
    const int MX = (1<<20);
     
    int T;
     
    int cakes = 100000 , queries , tar;
     
    int heights[MX];
     
    int tarcnt[MX] , tarpluscnt[MX];
     
    pair < int , int > Query[MX];
     
    int main(){
     
        scanf("%d",&T);
     
        while(T--){
     
            scanf("%d %d",&queries,&tar);
     
            for(int j = 1 ; j <= cakes ; j++) heights[j] = 0;
     
            for(int j = 1 ; j <= queries ; j++){
                int l , r;
                scanf("%d %d",&l,&r);
                Query[j] = {l , r};
                heights[l]++;
                heights[r+1]--;
            }
     
            for(int j = 1 ; j <= cakes ; j++){
     
                heights[j] += heights[j-1];
     
                tarcnt[j] = tarcnt[j-1];
     
                if(heights[j] == tar) ++tarcnt[j];
     
                tarpluscnt[j] = tarpluscnt[j-1];
     
                if(heights[j] == tar + 1) ++tarpluscnt[j];
            }
     
            int ans = 0;
     
            for(int j = 1 ; j <= queries ; j++){
                int l = Query[j].first , r = Query[j].second;
                ans = max(ans , tarcnt[l-1] +
                                tarcnt[cakes] - tarcnt[r] +
                                tarpluscnt[r] - tarpluscnt[l - 1]
                        );
            }
     
            cout<<ans<<endl;
     
        }
     
     
    }