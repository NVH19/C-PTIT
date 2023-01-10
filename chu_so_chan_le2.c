#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n,r,cnt=0,dem=0;
        scanf("%d",&n);
        while(n!=0){
            r = n%10;
            n /= 10;
            if(r%2==0)
                cnt++;
            else
                dem++;
        }
    printf("%d %d\n",dem ,cnt);
    }
}