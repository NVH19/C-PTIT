#include<stdio.h>
#include<stdlib.h>
int compareIntAsc(const void* a, const void* b){
    int aNum = *(int*)a;
    int bNum = *(int*)b;

    return aNum - bNum;
}
int main(){
    int a,b,s1=0,s2=0;
    scanf("%d%d",&a,&b);
    int c=a,d=b;
    while(a!=0){
        s1 += a%10;
        a /= 10;
    }
    while(b!=0){
        s2 += b%10;
        b /= 10;
    }
    if(s1<=s2)
        printf("%d %d",c,d);
    else
        printf("%d %d",d,c);
}