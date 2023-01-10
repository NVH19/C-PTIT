#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int check[n+1];
    for(int i=2; i<=n; i++)
        check[i] = 1;
    for(int i=2; i<=n; i++){
        for(int j=2*i; j<=n ;j+=i){
            check[j] = 0;
        }
    }
    for(int i=2; i<=n; i++){
        if(check[i])
            printf("%d\n",i);
    }
}