#include<stdio.h>
long long max(long long n){
    int r;
    long long res=0,cnt=1;
    while(n!=0){
        r = n%10;
        if(r==5)
            r=6;
        res = res + r*cnt;
        n /= 10; 
        cnt *=10;
    }
    return res;
}
long long min(long long m){
    int d;
    long long sum=0,dem=1;
    while(m!=0){
        d = m%10;
        if(d==6)
            d=5;
        sum = sum + d*dem;
        m /= 10;
        dem *= 10;
    }
    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld%lld",&a,&b);
        long long l = min(a) , h=min(b);
        long long c= max(a), e = max(b);
        printf("%lld %lld\n",l+h,c+e);
    }
}
