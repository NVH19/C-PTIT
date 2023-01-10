#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d%d",&n,&m);
    int a[n+m],b[m];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<m; i++)
        scanf("%d",&b[i]);
    scanf("%d",&k);
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
    for(int i=0; i<n+m; i++)
        printf("%d ",a[i]);
}