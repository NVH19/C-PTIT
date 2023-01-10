#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=2,b=1;
        for(int j=1; j<i+1; j++){
            if(i%2==0){
                printf("%d",a);
            }
            else{
                printf("%d",b);
            }
            a+=2;
            b+=2;
        }
        printf("\n");
    }
}