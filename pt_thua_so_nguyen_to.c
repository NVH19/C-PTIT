#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
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
        int n;
        scanf("%d",&n);
        printf("%d = ",n);
        for(int i=2; i<=sqrt(n); i++){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n /= i;
            }
            if(cnt){
                printf("%d^%d",i,cnt);
                    if(n==1)
                        printf("\n");
                    else
                        printf(" * ");
            }
        }
        if(nt(n))
            printf("%d^1\n",n);
    }
}