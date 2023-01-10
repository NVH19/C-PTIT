#include<stdio.h>
#include<math.h>
int thuannghich(int n){
    int r, res=0,cnt=0,m=n;
    while(n!=0){
        r = n%10;
        res = res*10+ r;
        if(r == 9){
            cnt++;
        }
        n /= 10;
    }
    if( res==m && cnt==0)
        return 1;
    return 0;
}
int main(){
    int n,dem=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(thuannghich(i)){
            printf("%d ",i);
            dem++;
        }
    }
    printf("\n%d",dem);
}