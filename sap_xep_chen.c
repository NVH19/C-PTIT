#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++){
        int x = a[i], cnt = i-1;
        while(cnt>=0 && a[cnt]>x){
            a[cnt+1] = a[cnt];
            cnt--;
        }
        a[cnt+1] = x;
        printf("Buoc %d: ",i);
        for(int j=0; j<=i ;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}