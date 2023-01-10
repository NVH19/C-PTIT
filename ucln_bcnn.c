#include<stdio.h>
#include<stdlib.h>
int main(){
        long long m,n;
        scanf("%lld%lld",&m,&n);
        long long a=m,b=n;
        while(m!=n){
            m = abs(m-n);
            n = abs(m-n);
        }
        printf("%lld\n%lld",m,(a/m)*b);
}