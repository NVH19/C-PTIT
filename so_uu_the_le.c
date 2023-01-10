#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if(n%2==0)
            printf("NO\n");
        else{
            int cnt=0,dem=0;
            while(n!=0){
                int r = n%10;
                if(r%2==0)
                    cnt++;
                else
                    dem++;
                n /= 10;
            }
            if(cnt>=dem)
                printf("NO\n");
            else   
                printf("YES\n");
        }
    }
}