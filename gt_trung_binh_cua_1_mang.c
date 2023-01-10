#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int s =0;
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        s += a[i];
    }
    printf("%0.3f",(double)s/n);
}