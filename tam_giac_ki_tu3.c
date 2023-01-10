#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=i,b=n-1;
        for(int j=1; j<=i; j++){
            printf("%c ",a+'A'-1);
            a += b;
            b--;
        }
        printf("\n");
    }
}