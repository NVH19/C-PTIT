#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[10000];
        int check[n+1];
        for(int i=2; i<= n;i++)
            check[i]=1;
        for(int i=2; i<=n ;i++){
            if(check[i]){
                for(int j=2*i; j<=n; j+=i)
                    check[j]=0;
                }
        }
        for(int i=2; i<=n ;i++){
            if(check[i]==1 && check[n-i]==1 && i <= n-i)
                printf("%d %d ", i ,n-i);
        }
        printf("\n");
    }
}