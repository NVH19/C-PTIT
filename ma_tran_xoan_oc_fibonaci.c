#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    long long b[90];
    int dem=0,idx=1;
    b[0]=0,b[1]=1;
    for(int i=2; i<90; i++){
        b[i] = b[dem]+b[idx];
        dem++;
        idx++;
    }
    int h1=0,h2=n-1,c1=0,c2=n-1;
    int cnt=1;
    while(cnt<=n*n){
        for(int i=c1; i<=c2;i++){
            a[h1][i] = b[cnt-1];
            cnt++;
        }
        h1++;
        for(int i=h1; i<=h2; i++){
            a[i][c2] = b[cnt-1];
            cnt++;
        }
        c2--;
        for(int i=c2; i>=c1;i--){
            a[h2][i] = b[cnt-1];
            cnt++;
        }
        h2--;
        for(int i=h2; i>=h1; i--){
            a[i][c1] = b[cnt-1];
            cnt++;
        }
        c1++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
}