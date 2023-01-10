#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long a[95];
        int tmp=0,idx=1;
        a[tmp]=0,a[idx]=1;
        int cnt=0;
        for(int i=2;i<95; i++){
            a[i]= a[tmp]+a[idx];
            tmp++;
            idx++;
            if(n==a[i])
                cnt=1;
        }
        if(cnt || n==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}