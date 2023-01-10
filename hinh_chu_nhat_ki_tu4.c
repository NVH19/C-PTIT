#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=1; i<=m; i++){
        int cnt = m+1-i+64;
        for(int j=1; j<=n; j++){
            if(j-i>=n-m)
                printf("%c",(char)(n+64));
            else
                printf("%c",(char)cnt++);
        }
        printf("\n");
    }
}