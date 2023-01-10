#include<stdio.h>
#include<math.h>
int check[1000000];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long l,r;
        scanf("%lld%lld",&l,&r);
        if(l>r){
            long long tmp = l;
            l = r;
            r = tmp;
        }
        for(int i=2; i<=sqrt(r); i++)
            check[i]=1;
        for(int i=2; i<=sqrt(r); i++){
            if(check[i]){
                for(int j=2*i; j<=sqrt(r); j+=i)
                    check[j]=0;
            }
        }
        int cnt=0;
        for(int i=2; i<=sqrt(r);i++){
            if(check[i]==1 )
                cnt++;
        }
        printf("%d\n",cnt);
    }
}