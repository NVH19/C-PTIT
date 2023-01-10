#include<stdio.h>
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                swap(&a[i][j],&a[i][n-i-1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}