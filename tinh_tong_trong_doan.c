#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a,b,t,tmp=n;
    if(n>m){
        n=m;
        m=tmp;

    }
    a = n*(n+1)/2;
    b = m*(m+1)/2;
    t = b - a + n ;
    printf("%d",t);
}