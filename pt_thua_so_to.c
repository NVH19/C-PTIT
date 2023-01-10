#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        for(int i=2; i<=sqrt(n); i++){
            while(n%i==0){
                printf("%d ",i);
                n = n/i;
            }
        }
        if(nt(n)){
            printf("%d\n",n);
        }
        printf("\n");
    }
}