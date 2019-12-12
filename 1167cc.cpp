    #include<bits/stdc++.h>
    using namespace std;
    int i,n,m,k,pre[500005],siz[500005],a[500005];
    int fin(int x)
    {
        if(pre[x]==x) return x;
        else return (pre[x]=fin(pre[x]));                                    //return (pre[x]==x)?x:pre[x]=fin(pre[x]);
    }
    void uni(int x,int y)
    {if(fin(x)!=fin(y))
        siz[fin(x)]+=siz[fin(y)],pre[fin(y)]=fin(x);}
    int main()
    {
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)pre[i]=i,siz[i]=1;
        while(m--)
        {
            scanf("%d",&k);
            for(i=1;i<=k;i++)scanf("%d",&a[i]),uni(a[i],a[1]);
        }
       for(i=1;i<=n;i++)printf("%d%c",siz[fin(i)],i==n?'\n':' ');
    // for(int i=1;i<=n;i++){
    //     cout<< pre[i]<<" ";
    // }
        return 0;
    }