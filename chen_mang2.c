#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a=t;
    for(int l=1; l<=t; l++){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        int a[n+m],b[m];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);
        int c[n-k];
        int cnt=0,dem=0,idx=0,tmp=0;
        for(int i=k; i<n; i++){
            c[idx]=a[i];
            idx++;
        }
        for(int i=k;i<n+m;i++){
            a[i]=b[dem];
            dem++;
        }
        for(int i=m+k; i<n+m; i++){
            a[i]=c[tmp];
            tmp++;
        }
        printf("Test %d:\n",l);
        for(int i=0; i<n+m; i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}