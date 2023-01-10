#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n-1][2];
    for(int i=1; i<n ;i++){
        for(int j=1; j<=2 ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int tmp = a[1][1], res = a[1][2];
    int cnt =0,dem=0;
    // printf("%d ",a[1][1]);
    for(int i=1; i<n; i++){
        if(a[i][1]==tmp )
            cnt++;
    }
    for(int i=1; i<n; i++){
        if(a[i][2]==res)
            dem++;
    }
    if(cnt==n-1 || dem==n-1)
        printf("YES");
    else
        printf("NO");
}