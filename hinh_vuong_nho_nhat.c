#include<stdio.h>
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
    int max0,max1,max2,min0,min1,min2;
    max1 = max(max(x1,x2),max(x3,x4));
    max2 = max(max(y1,y2),max(y3,y4));
    // max0 = max(max1,max2);
    min1 = min(min(x1,x2),min(x3,x4));
    min2 = min(min(y1,y2),min(y3,y4));
    // min0 = min(min1,min2);
    int hv;
    hv = max(max1-min1,max2-min2);
    printf("%d",hv*hv);
}