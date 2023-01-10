#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i+j<m){
                printf("%d",i+j+1);
            }
            else if(j==0)
                printf("%d",i+1);
            else{
                printf("%d",m-j);
            }
        }
        printf("\n");
    }
}