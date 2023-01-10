#include<stdio.h>
#include<math.h>
int thuanngich(int n){
    int r,res=0,s=0,m=n;
    while(n!=0){
        r = n%10;
        res = res*10 + r;
        s += r;
        n /= 10;
    }
    if(res==m && s%10==0)
        return 1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int cnt=0;
        int a = pow(10,n-1),b = pow(10,n);
        for(int i=a ; i<b;i++){
            if(thuanngich(i))
                cnt++;
        }
        printf("%d\n",cnt);
    }
}