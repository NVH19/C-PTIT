#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int r,cnt=0;
        long long res=0;
        long long idx=1;
        while(n!=0){
            r = n%10;
            if(r==0 || r==8 || r==9)
                r = 0;
            else if(r==1)
                r =1;
            else
                cnt++;
            res = res + r*idx;
            n /= 10;
            idx *= 10;
        }
        if(cnt>0 || res==0)
            printf("INVALID\n");
        else
            printf("%lld\n",res);

    }
}