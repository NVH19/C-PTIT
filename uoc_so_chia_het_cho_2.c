#include<stdio.h>
#include<math.h>
int chinhphuong(int n){
    int a = sqrt(n);
    if(a*a==n)
        return 1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2!=0)
            printf("0\n");
        else{
        int cnt=0,a;
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    if(i%2==0)
                        cnt++;
                    if((n/i)%2==0)
                        cnt++;
                }
            }
            if(chinhphuong(n))
                printf("%d\n",cnt);
            else
                printf("%d\n",cnt+1);
        }
    }
}