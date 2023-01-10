#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=1,b=2*i-3;
        for(int j=1 ;j<=n+i-1; j++){
            if(i+j<=n)
                printf("~");
            else if(j<=n){
                printf("%d",a);
                a += 2;
            }
            else{
                printf("%d",b);
                b -= 2;
            }
        }
        printf("\n");
    }
}