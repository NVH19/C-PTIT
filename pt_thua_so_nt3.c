#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    return 1;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++){
        int n;
        scanf("%d",&n);
        printf("Test %d: ", k);
        for(int i=2; i<=sqrt(n); i++){
            int dem=0;
            while(n%i==0){
                dem+=1;
                n/=i;
            }
            if(dem){
                printf("%d(%d) ", i, dem); 
            }
        }
        if(nt(n))
            printf("%d(1)", n);
        printf("\n");
    }
}