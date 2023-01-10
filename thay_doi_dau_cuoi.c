#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    double cnt=0.1;
    scanf("%d",&n);
    int m=n;
    while(n!=0){
        n = n/10;
        cnt*=10;
    }
    int a = m%10;
    int b = m/(int)cnt;
    int t = abs(b - a);
    // printf("%d %d %d\n",m,(int)cnt,t);
    if(a>b){
        m = m-t+t*(int)cnt;
        printf("%d",m);
    }
    else if(a<b){
        m = m+t-t*(int)cnt;
        printf("%d",m);
    }
    else
    printf("%d",m);
}