#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++){
        int idx=i;
        for(int j=1; j<=m; j++){
            if(i+j<=m){
                printf("%d",idx);
                idx++;
            }
            else{
                printf("%d",idx);
                idx--;
            }
        }
        printf("\n");
    }
}