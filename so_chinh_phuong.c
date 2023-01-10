#include<stdio.h>
#include<math.h>
int main(){
    int n,t,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a = sqrt(n);
        if(a*a==n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}