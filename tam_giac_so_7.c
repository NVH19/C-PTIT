#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n ;i++){
        int b=n-1,a=i;
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a += b;
            b--;
        }
        printf("\n");
    }
}