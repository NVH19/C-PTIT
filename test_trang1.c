#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    long long res=0;
    int cnt=0;
    while(a!=0){
        int r = a%2;
        res += r * pow(10,cnt);
        cnt++;
        a /= 2;
    }
    printf("%lld",res);
}