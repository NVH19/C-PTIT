#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bcnn(int a, int b){
    int m = a,n = b;
    while(m!=n){
        m = abs(m-n);
        n = abs(m-n);
    }
    return b*(a/m);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n], b[n+2];
        for(int i=0; i<n ; i++)
            scanf("%d",&a[i]);
        int tmp = 1;
        for(int i=0; i<n; i++){
            b[i] = bcnn(a[i],tmp);
            tmp  = a[i];
        }
        b[n] = a[n-1];
        for(int i=0; i<=n; i++)
            printf("%d ",b[i]);
        printf("\n");
    }
}