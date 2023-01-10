#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long a[n],a0=0,a1=1;
    a[a0]=0;
    a[a1]=1;
    for(int i=2; i<n; i++){
        a[i] = a[a0]+a[a1];
        a0++;
        a1++;
    }
    for(int i=0; i<n; i++){
        printf("%lld ", a[i]);
    }
}