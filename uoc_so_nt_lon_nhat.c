#include<stdio.h>
#include<math.h>
int nt(long long n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        for(int i=2; i<=sqrt(n); i++){
            while(n%i==0){
                if(i*i==n){
                    printf("%d\n",i);
                    break;
                }
                n /= i;
            }
        }
        if(nt(n))
            printf("%lld\n",n);
    }
}