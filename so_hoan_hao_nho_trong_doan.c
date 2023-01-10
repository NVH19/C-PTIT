#include<stdio.h>
#include<math.h>
int shh(int n){
    int s=0;
    for(int i=1; i<n; i++){
        if(n%i==0)
            s += i;
    }
    if(s==n)
        return 1;
    else
        return 0;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a; i<=b; i++){
        if(shh(i))
            printf("%d ",i);
    }
}