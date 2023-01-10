#include<stdio.h>
#include<math.h>
int thuan_nghich(int n){
    int r,res=0,s=0;
    int tmp = n;
    while(n!=0){
        r = n%10; 
        if(r==4)
            return 0;
        res = res*10 + r;
        n /= 10;
        s += r;
    }
    if(res!=tmp || s%10!=0)
        return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a = pow(10,n-1), b = pow(10,n);
        for(int i=a; i<=b; i++){
            if(thuan_nghich(i))
                printf("%d ",i);
        }
        printf("\n");
    }
}