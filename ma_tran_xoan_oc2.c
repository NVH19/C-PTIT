#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf("%d",&a[i][j]);
            }
        }
        int cnt=1;
        int d = n*m;
        int b[d],dem=0;
        int c1=0,h1=0,c2=m-1,h2=n-1;
        while(cnt<=n*m){
            if(dem!=d)
                for(int i=c1; i<=c2; i++){
                    b[dem]=a[h1][i];
                    cnt++;
                    dem++;
                }
                h1++;
            if(dem!=d)
                for(int i=h1;i<=h2; i++){
                   b[dem]=a[i][c2];
                    cnt++;
                    dem++;
                }
                c2--;
            if(dem!=d)
                for(int i=c2; i>=c1;i--){
                    b[dem]=a[h2][i];
                    cnt++;
                    dem++;
                }
                h2--;
            if(dem!=d)
                for(int i=h2; i>=h1; i--){
                    b[dem]=a[i][c1];
                    cnt++;
                    dem++;
                }
                c1++;
        }
        for(int i=0; i<dem; i++)
            printf("%d ",b[i]);
        printf("\n");
    }
}