#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[42],a0=0,a1=1,dem=2;
    a[a0]=0;
    a[a1]=1;
    for(int i=2; i<42; i++){
        a[i] = a[a0]+a[a1];
        a0++;
        a1++;
    }
    int cnt=0;
    for(int i=0; i<41; i++){
        if(a[i]==n)
            cnt=1;
    }
    if(cnt)
        printf("1");
    else
        printf("0");
        
}