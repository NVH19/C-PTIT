#include<stdio.h>
int uuthe(long long n){
    if(n%2!=0)
        return 0;
    int r, cnt=0,dem=0;
    while(n!=0){
        r = n%10;
        if(r%2==0)
            cnt++;
        else
            dem++;
        n /= 10;
    }
    if(cnt<=dem)
        return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        if(uuthe(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}