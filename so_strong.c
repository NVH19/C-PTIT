#include<stdio.h>
int gt(int m){
    int gt1=1;
    for(int i=1; i<=m; i++){
        gt1*=i;
    }
    return gt1;
}
int main(){
    int n,r,s=0;
    scanf("%d",&n);
    int m=n;
    while(n!=0){
        r = n%10;
        n /= 10;
        s += gt(r);
    }
    if(s==m)
        printf("1");
    else
        printf("0");
}