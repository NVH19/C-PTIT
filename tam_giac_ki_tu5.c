#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n ;i++){
        int cnt = n -i+64;
        for(int j=1; j<=n-i+1 ;j++){
            printf("%c",(char)cnt++);
        }
        printf("\n");
    }
}