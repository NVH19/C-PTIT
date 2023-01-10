#include<stdio.h>
int min(int a, int b){
    if(a>b)
        return b;
    return a;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        for(int j=0; j<2*n-1; j++){
            int c =min(min(i,j),min(2*n-i-2,2*n-j-2));
            printf("%d",(n-c));
        }
        printf("\n");
    }
}