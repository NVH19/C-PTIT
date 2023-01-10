#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++){
        int n;
        int check[3000];
        scanf("%d",&n);
        int a[n][n];
        for(int i=2;i<3000; i++)
            check[i]=1;
        for(int i=2; i<3000; i++){
            if(check[i]){
                for(int j=2*i; j<3000; j+=i)
                    check[j]=0;
            }
        }
        int b[400],idx=1;
        for(int i=2; i<3000;i++){
            if(check[i]){
                b[idx]=i;
                idx++;
            }
        }
        int h1=0,h2=n-1,c1=0,c2=n-1;
        int cnt=1;
        while(cnt<=n*n){
            for(int i=c1; i<=c2;i++){
                a[h1][i] = b[cnt];
                cnt++;
            }
            h1++;
            for(int i=h1; i<=h2; i++){
                a[i][c2] = b[cnt];
                cnt++;
            }
            c2--;
            for(int i=c2; i>=c1;i--){
                a[h2][i] = b[cnt];
                cnt++;
            }
            h2--;
            for(int i=h2; i>=h1; i--){
                a[i][c1] = b[cnt];
                cnt++;
            }
            c1++;
        }
        printf("Test %d:\n",k);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}