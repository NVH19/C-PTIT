#include<stdio.h>
int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    int n;
    int check[1005];
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=2; i<1005 ;i++)
        check[i]=1;
    for(int i=2; i<1005; i++){
        if(check[i]){
            for(int j=2*i; j<1005; j+=i)
                check[j]=0;
        }
    }
    int res=0,idx;
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(check[a[i][j]])
                cnt++;
        }
        if(cnt>res){
            res = cnt;
            idx = i;
        }
    }
    printf("%d\n",idx+1);
    for(int j=0;j<n;j++){
        if(check[a[idx][j]])
            printf("%d ",a[idx][j]);
    }
}