#include<stdio.h>
void matric(int m,int n, int p, int a[m][n], int b[n][p],int c[m][p]){
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            c[i][j] =0;
            for(int k=0; k<n; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++){
        int n;
        scanf("%d",&n);
        int a[n][n],b[n][n],c[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j)
                    a[i][j]=0;
                else{
                    a[i][j]=j+1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                b[i][j]=a[j][i];
        }
        matric(n,n,n,a,b,c);
        printf("Test %d:\n");
        for(int i=0;i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
}