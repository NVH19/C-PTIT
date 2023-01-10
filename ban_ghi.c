#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
struct tamgiac{
    int a,b,c;
};
typedef struct tamgiac TG;
TG nhap(int id){
    TG x;
    scanf("%d%d%d",&x.a,&x.b,&x.c);
    return x;
}
double dientich(TG x){
    double p = (x.a+x.b+x.c)/2;
    double d = p-x.a, e = p-x.b, f =p-x.c;
    double g = sqrt(p*d*e*f);
    return g;
}
int cmp(const void *a, const void *b){
    TG *x = (TG*)a;
    TG *y = (TG*)b;
    if(dientich(*x)>dientich(*y))
        return 1;
    else
        return -1;
}
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    TG a[1000];
    for(int i=0; i<n; i++){
        a[cnt] = nhap(i);
        cnt++;
    }
    qsort(a,n,sizeof(TG),cmp);
    for(int i=0; i<cnt; i++){
        printf("%d %d %d\n",a[i].a,a[i].b,a[i].c);
    }
}