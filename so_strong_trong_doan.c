#include<stdio.h>
int gt(int m){
    int gt1=1;
    for(int i=1; i<=m; i++){
        gt1*=i;
    }
    return gt1;
}
int strong(int n){
    int s=0,m=n;
    while(n!=0){
        int r = n%10;
        s += gt(r);
        n /= 10;
    }
    if(s==m)
        return 1;
    else
        return 0;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        if(strong(i))
            printf("%d ",i);
    }
}