#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++)
        scanf("%d",&a[i]);
    int check[1001];
    for(int i=2; i<1001; i++)
        check[i]=1;
    for(int i=2; i<1001; i++){
        if(check[i]){
            for(int j=2*i; j<1001; j+=i)
                check[j]=0;
        }
    }
    check[0]=0,check[1]=0;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(check[a[i]])
            cnt++;
    }
    printf("%d ",cnt);
    for(int i=0; i<n ;i++){
        if(check[a[i]])
            printf("%d ",a[i]);
    }
}