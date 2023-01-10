#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t ;i++){
        int n;
        double cnt=0.1;
        scanf("%d",&n);
        int m=n;
        while(n!=0){
            n = n/10;
            cnt*=10;
        }
        if(m%10 == m/(int)cnt)
            printf("YES\n");
        else
            printf("NO\n");
    }
}