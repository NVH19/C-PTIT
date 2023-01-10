#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int cnt=1;
        while(n!=0){
            if((n%10)%2!=0)
                cnt=0;
                n /= 10;
        }
        if(cnt>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}