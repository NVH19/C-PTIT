#include<stdio.h>
int main(){
    int n,r,t=1;
    scanf("%d",&n);
    while(n!=0){
        r = n%10;
        n /= 10;
        t *= r;
    }
    printf("%d",t);
}