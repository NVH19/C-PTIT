#include<stdio.h>
int gcd(int n,int m){
    while(n*m!=0){
        if(n>m)
            n %= m;
        else   
            m %= n;
    }
    return n+m;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a; i<=b ;i++){
        for(int j=a; j<=b; j++){
            if(gcd(i,j)==1 && i<j)
                printf("(%d,%d)\n",i,j);
        }
    }
}