#include<stdio.h>
#include<math.h>
#define n  65557
int main(){
    int check[n+1];
    for(int i=2; i<=n; i++)
        check[i] = 1;
    for(int i=2; i<=sqrt(n); i++){
        if(check[i]){
            for(int j=2*i; j<=n ;j+=i){
                check[j] = 0;
            }
        }
    }
    int cnt=0,m;
    scanf("%d",&m);
    for(int i=2; i<=n; i++){
        if(check[i] && cnt < m){
            printf("%d\n",i);
            cnt++;
        }
    }
}