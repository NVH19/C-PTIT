#include<stdio.h>
#include<math.h>
int thuan_nghich(long long n){
    int r;
    long long res=0,m=n;
    while(n!=0){
        r = n%10;
        res = res*10 + r;
        n /= 10;
    }
    if(res!=m)
        return 0;
    return 1;
}
int check(int a,int b){
    if(a==2*b || b==2*a)
        return 1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        int cnt=0;
        scanf("%lld",&n);
        long long m=n;
        while(n!=0){
            int r = n%10;
            cnt++;
            n /= 10;
        }
        long long c =pow(10,cnt-1);
        long long a = m%c,b=m/c;
        if(check(m%10,b)==1 && thuan_nghich(a/10)==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}