#include <bits/stdc++.h>
using namespace std;
long long x1,y10,x2,y2,n;
long long deltax,deltay;
long long f (long long sr)
{
    return abs (deltax*sr-x2) + abs (deltay*sr-y2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>x1>>y10>>x2>>y2;
    x2-=x1;
    y2-=y10;
    cin>>n;
    string s;
    cin>>s;
    deltax=deltay=(long long)0;
    for (long long i=0; i<n; i++)
    {
        if (s[i]=='D') deltay--;
        if (s[i]=='U') deltay++;
        if (s[i]=='R') deltax++;
        if (s[i]=='L') deltax--;
    }
    //cout<<deltax<<" "<<deltay<<endl;
    long long l=(long long)0;
    long long r=(long long) (2e9+10);
    while (r-l>1)
    {
        long long sr=(l+r)/(long long)2;
        if (sr*n>=f(sr))
        {
            r=sr;
        }
        else l=sr;
    }
    if (l>=(long long )(2e9+5))
    {
        cout<<"-1";
        return 0;
    }
    while (n*l<f(l))
    {
        l++;
        if (l>=(long long) (2e9+5))
        {
            cout<<"-1";
            return 0;
        }
    }
    l=max(l-(long long)1,(long long)0);
    // это l
    x2-=deltax*l;
    y2-=deltay*l;
    for (long long i=0; i<n; i++)
    {
        if (abs(x2)+abs(y2)<=i+l*n)
        {
            cout<<i+l*n;
            return 0;
        }
        if (s[i]=='D') y2++;
        if (s[i]=='U') y2--;
        if (s[i]=='R') x2--;
        if (s[i]=='L') x2++;
    }
    cout<<l*n+n;
    return 0;
}