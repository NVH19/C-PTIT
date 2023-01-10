#include<stdio.h>
#include<stdlib.h>
long long gcd(long long a,long long b){
    while(a!=b){
        a = abs(a-b);
        b = abs(a-b);
    }
    return a;
}
long long bcnn(long long a,long long b){
    return (a/gcd(a,b))*b;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld %lld\n", bcnn(a,b),gcd(a,b));
    }
}