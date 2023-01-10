#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int cnt=2*i-3+64;
        for(int j=1; j<=n; j++){
            if(i+j<=n+1){
                printf("%c",(char)(cnt+=2));
            }
        }
        printf("\n");
    }
}