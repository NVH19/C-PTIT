#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int r,s=0;
        int cnt=1;
        long long m=n,res=0;
        while(n!=0){
            r = n%10;
            s += r;
            res = res*10+r;
            if(r%2==0)
                cnt = 0;
            n /= 10;
        }
        if(res==m && cnt==1 && s%2!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}