#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int m,n;
        scanf("%d%d",&m,&n);
        while(m!=n){
            m = abs(m-n);
            n = abs(m-n);
        }
        printf("%d\n",m);
    }
}