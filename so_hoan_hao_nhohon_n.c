#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(6<n&&n<28)
        printf("6");
    else if(6<n&&n<496)
        printf("6 28");
    else if(6<n&&n<8128)
        printf("6 28 496");
    else if(n>8128)
        printf("6 28 496 8128");
}