#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b){
    while(a!=b){
        a = abs(a-b);
        b = abs(a-b);
    }
    return a;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(gcd(a,b) == gcd(c,d))
            printf("YES\n");
        else
            printf("NO\n");
    }
}