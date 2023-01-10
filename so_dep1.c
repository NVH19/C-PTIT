#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a; i<=b ;i++){
        if(nt(i)){
            int r,s=0;
            int c=i;
            while(c!=0){
                r = c%10;
                c /= 10;
                s += r;
            }
            if(s==2 || s==3 || s==5 || s==8 || s==13 || s==21 || s==34)
                printf("%d ",i);
        }
    }
}