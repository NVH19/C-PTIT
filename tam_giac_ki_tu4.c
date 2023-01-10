#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a=1,b=2*i-3;
        for(int j=1; j<=2*i-1; j++){
            if(i>=j){
                printf("%c",a+'A'-2);
                a += 2;
            }
            else{
                printf("%c",b+'A'-2);
                b -= 2;
            }
        }
        printf("\n");
    }
}