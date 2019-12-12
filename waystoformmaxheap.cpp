long long ans=1;
const int m= 1e9+7;
long long binomial(long long n, long long k){
    long long c[n+1];
    memset(c,0,sizeof(c));
    c[0]=1;
    for(long long i=1;i<=n;i++){
        for(long long j= min(i,k);j>0;j--){
            c[j]=(c[j] +c[j-1])%m;
        }
    }
    return c[k];
}
void countcombination(long long n){
    long long x=1;
    if(n<=1) return ;
    n-=1;
    long long left=0, right=0;
    while(n>0){
        left+= min(x,n);
        n-= min(n,x);
        right+= min(x,n);
        n-=min(x,n);
        x*=2;
    }
    ans= (ans* binomial(left+right, left))%mod;
    countcombination(left);
    countcombination(right);
}
int Solution::solve(int A) {
    long long x = 1LL* A;
    ans=1;
    countcombination(x);
    return ans;
}
