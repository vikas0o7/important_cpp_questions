int Solution::jump(vector<int> &A) {
    int n=A.size();
    if(n<=1) return 0;
    int cnt=1;
    int maxreach=A[0], currmax=A[0];
    for(int i=1;i<=maxreach;i++){
        if(i==n-1) return cnt;
        currmax= max(currmax, i+A[i]);
        if(maxreach==i){
            if(currmax<=i) return -1;
            maxreach= currmax;
            cnt++;
        }
    }
    return -1;
}
