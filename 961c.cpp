    #include <vector>
    #include <cstdio>
    #include <cstring>
    #include <algorithm>
    #include<iostream> 
    using namespace std;
    const int N = 105;
     
    char mat[4][N][N];
    int value[4];
     
    int main()
    {
        int n;
     
        scanf("%d",&n);
        for(int id=0;id<4;id++)
        {
            for(int i=0;i<n;i++) scanf("%s",mat[id][i]);
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++) if((i+j)%2!=mat[id][i][j]-'0') value[id]++;
            }
            //cout<< value[id]<<endl;
        }
        sort(value,value+4);
        int ans = value[0]+value[1]+n*n-value[2]+n*n-value[3];  // because for last 2 matrices, we are comparing with zero instead of comparing with '1';
        printf("%d\n",ans);
        return 0;
    }