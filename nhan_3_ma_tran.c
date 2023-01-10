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
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int a[m][n],b[n][p],c[p][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++)
            scanf("%d",&b[i][j]);
    }
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++)
            scanf("%d",&c[i][j]);
    }
    int d[m][p],e[m][q];
    matric(m,n,p,a,b,d);
    matric(m,p,q,d,c,e);
    for(int i=0; i<m; i++){
        for(int j=0; j<q;j++){
            printf("%d ",e[i][j]);
        }
        printf("\n");
    }
}