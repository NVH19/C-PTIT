#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long a[100];
        int tmp=0,idx=1;
        a[tmp]=0,a[idx]=1;
        for(int i=2; i<100 ; i++){
            a[i] = a[tmp] + a[idx];
            tmp++;
            idx++;
        }
        printf("%lld",a[n]);
        printf("\n");
    }
}