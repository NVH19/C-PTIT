#include<stdio.h>
#include<math.h>
int tong(int a){
    int s=0,m=a;
    while(m!=0){
        int r=m%10;
        s += r;
        m /= 10;
    }
    return s;
}
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
    int n;
    scanf("%d",&n);
    int s1 = tong(n);
    int s2=0;
    for(int i=2; i<=sqrt(n);i++){
        while(n%i==0){
            s2 += tong(i);
            n = n/i;
        }
    }
    if(nt(n))
        s2 = s2 +tong(n);
    if(s1==s2)
        printf("YES");
    else
        printf("NO");
}