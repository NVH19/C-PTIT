#include<stdio.h>
#include<math.h>
int main(){
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=-1){
        if(a>b){
            long long tmp = a;
            a = b;
            b = tmp;
        }
        int i=1,cnt=0;
        long long l=a,r=b;
        if(b-a<=2){
            printf("%lld\n",b-a);
        }
        else{
                while(l+i<=r-i){
                l+=i;
                r-=i;
                i++;
                cnt++;
            }
            // printf("%lld %lld\n",l,r);
            // printf("%d\n%d\n",i,cnt);
            if(r-l==0)
                printf("%d\n",2*cnt);
            else if(r-l<=i)
                printf("%d\n",2*cnt+1);
            else
                printf("%d\n",2*cnt+2);
        }
    }
}