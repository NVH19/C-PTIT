#include<stdio.h>
int min(int a, int b){
    if(a<b)
        return a;
    return b;
}
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            int nhonhat = min(i-1,j-1);
                printf("%c",(char)(max(m,n)+96-nhonhat));
        }
        printf("\n");
    }
}