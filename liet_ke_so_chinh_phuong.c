#include<stdio.h>
#include<math.h>
int sochinhphuong(int n){
    if(sqrt(n)*sqrt(n) == n)
        return 1;
    else
        return 0;
}
int main(){
    int m,n,a=1,cnt=0,b;
    scanf("%d%d",&m,&n);
    for(int i=2; i<31623 ;i++){
        if(m <= i*i && i*i <= n)
            cnt++;
    }
    printf("%d\n",cnt);
    for(int i=2; i<31623 ;i++){
        if(m <= i*i && i*i <= n)
            printf("%d\n",i*i);
    }
}