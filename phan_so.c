#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
    while(a!=b){
        a = abs(a-b);
        b = abs(a-b);
    }
    return a;
}
int bcnn(int a,int b){
    return (a/gcd(a,b))*b;
}
int rutgon(int a,int b){
    return a/gcd(a,b);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int m = a/gcd(a,b), n = b/gcd(a,b);
        int p = c/gcd(c,d), q = d/gcd(c,d);
        printf("Case #%d:\n",k);
        m = m*(bcnn(q,n)/n),n = n*(bcnn(q,n)/n);
        p = p*(bcnn(q,n)/q), q = q*(bcnn(q,n)/q);
        printf("%d/%d %d/%d\n",m,n,p,q);
        printf("%d/%d\n",rutgon(m+p,n),rutgon(n,m+p));
        printf("%d/%d\n",rutgon(m,p),rutgon(p,m));
    }
}