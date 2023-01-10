#include<stdio.h>
#include<math.h>
int thuannghich(int n){
    int r,res=0,s=0,cnt=0,m=n;
    while(n!=0){
        r = n%10;
        res = res*10+r;
        s += r;
        if(r==6)
            cnt++;
        n /= 10;
    }
    if(res == m && s%10==8 && cnt>0)
        return 1;
    return 0;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        int tmp =a;
        a = b;
        b =tmp;
    }
    int dem=0;
    for(int i=a; i<=b ;i++){
        if(thuannghich(i))
            printf("%d ",i);
    }
    // printf("%d",dem);
}