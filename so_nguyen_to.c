#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n,cnt=0;
        scanf("%d",&n);
        for(int j=2; j<=sqrt(n); j++){
            if(n%j==0){
                cnt++;
            }
        }
        if(cnt > 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}