#include<stdio.h>
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int k=0; k<t; k++){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0; i<n ;i++){
            for(int j=0; j<m; j++)
                scanf("%d",&a[i][j]);
        }
        int res=0,b[n],c[m],idx;
        for(int i=0; i<n; i++){
            b[i]=0;
            for(int j=0; j<m; j++){
                b[i] += a[i][j];
            }
            if(res<b[i]){
                res = b[i];
                idx=i;
            }
        }
        for(int i=idx; i<n; i++){
            for(int j=0; j<m; j++){
                a[i][j] = a[i+1][j];
            }
        }
        n--;
        int sum=0,cnt;
        for(int j=0; j<m; j++){
            c[j]=0;
            for(int i=0; i<n; i++){
                c[j] += a[i][j];
            }
            if(sum < c[j]){
                sum =c[j];
                cnt = j;
            }
        }
        for(int j=cnt; j<m; j++){
            for(int i=0; i<n; i++)
                a[i][j] = a[i][j+1];
        }
        m--;
        printf("Test %d:\n",k+1);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}