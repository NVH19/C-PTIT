#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    int s=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(nt(a[i][j]))
                s += a[i][j];
        }
    }
    printf("%d",s);
}