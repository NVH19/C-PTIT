#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=2,b=2*i-2;
        for(int j=1; j<=2*i-1; j++){
            if(i>=j){
                printf("%d",a);
                a+= 2;
            }
            else{
                printf("%d",b);
                b -= 2;
            }
        }
        printf("\n");
    }
}