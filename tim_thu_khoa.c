#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct HocSinh{
    char ten[20];
    char ngaysinh[10];
    double toan,ly,hoa;
};
typedef struct HocSinh HS;
void nhap(HS *x){
    getchar();
    gets(x->ten);
    gets(x->ngaysinh);
    scanf("%lf %lf %lf",&x->toan,&x->ly,&x->hoa);
}
double max(double a,double b){
    return a > b ? a : b;
}
int main(){
    int n;
    scanf("%d",&n);
    HS a[n+1];
    getchar();
    double res =0 ;
    for(int i=1; i<=n; i++){
        nhap(&a[i]);
        double tong = a[i].toan + a[i].ly + a[i].hoa;
        res = max(res,tong);
    }
    for(int i=1; i<=n; i++){
        if(a[i].toan + a[i].ly + a[i].hoa == res){
            printf("%d ",i);
            printf("%s %s %0.1lf\n",a[i].ten,a[i].ngaysinh,res);
        }
    }
}