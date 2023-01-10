#include<stdio.h>
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=1; i<=m; i++){
        int cnt=max(m,n)-i+1;
        for(int j=1; j<=n; j++){
            if(i+j<=max(m,n))
                printf("%d",cnt--);
            else
                printf("%d",cnt++);
        }
        printf("\n");
    }
}