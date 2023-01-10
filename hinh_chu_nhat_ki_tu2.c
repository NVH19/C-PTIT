#include<stdio.h>
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=1; i<=m; i++){
        int cnt=i+64, dem = min(i,n+1)+63;
        for(int j=1; j<=n; j++){
            if(i+j<=n+1)
                printf("%c",(char)cnt++);
            else
                printf("%c",(char)dem--);
        }
        printf("\n");
    }
}