#include<stdio.h>
#include<math.h>
int check[10000]={0};
int sum(int n){
    int s=0;
    while(n!=0){
        int r = n%10;
        s += r;
        n /= 10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2; i<10000; i++)
        check[i]=1;
    for(int i=2; i<10000; i++){
        if(check[i]){
            for(int j=2*i; j<10000;j+=i)
                check[j]=0;
        }
    }
    int cnt=0;
    for(int i=5; i<=n; i++){
        int a = sum(i);
        if(check[i]==1 && a%5==0){
            printf("%d ",i);
            cnt++;
        }
    }
    printf("\n%d",cnt);
}