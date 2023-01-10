#include<stdio.h>
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
    int b = m/((int)cnt);
    printf("%d%d",b,a);
}