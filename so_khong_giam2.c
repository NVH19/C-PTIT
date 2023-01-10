#include<stdio.h>
#include<math.h>
int ko_giam(int n){
    while(n!=0){
        int r1 = n%10;
        int t = n/10;
        int r2 = t%10;
        if(r2>r1)
            return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int st = pow(10,n-1);
        int nd = pow(10,n);
        for(int i=st; i<nd;i++){
            if(ko_giam(i))
                printf("%d ",i);
        }
        printf("\n");
    }
}