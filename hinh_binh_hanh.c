#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if((n-1)<= i+j && i+j <= (2*n-2))
                printf("*");
            else if(i+j < (n-1))
                printf("~");
            else
                printf(" ");
        }
        printf("\n");
    }
}