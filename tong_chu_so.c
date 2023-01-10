#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t ;i++){
        int n,r,s=0;
        scanf("%d",&n);
        while(n!=0){
        r = n%10;
        n = n/10;
        s += r;
    }
    printf("%d ",s);
    }
}