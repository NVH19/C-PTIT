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
        int n,s=1;
        scanf("%d",&n);
        if(nt(n))
            printf("%d\n",n);
        else{
            for(int i=2; i<=sqrt(n); i++){
                int cnt=0;
                while(n%i==0){
                    cnt++;
                    n /= i;
                }
                if(cnt)
                    s *= i;
            }
            if(nt(n))
                printf("%d\n",s*n);
            else
                printf("%d\n",s);
        }
    }
}