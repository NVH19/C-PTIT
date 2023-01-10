#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ThiSinh{
    int id;
    char ten[200];
    char ngaysinh[20];
    float toan,ly,hoa;
};
typedef struct ThiSinh TS;
void nhap(TS *x){
    getchar();
    gets(x->ten);
    gets(x->ngaysinh);
    scanf("%f%f%f",&x->toan, &x->ly , &x->hoa);
}
void in(TS a){
    printf("%d %s %s %0.1f\n", a.id,a.ten,a.ngaysinh,a.toan + a.ly + a.hoa);
}
int cmp(const void *a, const void *b){
    TS *x = (TS*)a;
    TS *y = (TS*)b;
    if((x->toan + x->ly + x->hoa) < (y->toan + y->ly + y->hoa))
        return 1;
    else    
        return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    TS a[n];
    for(int i=0; i<n; i++){
        a[i].id = i+1;
        nhap(&a[i]);
    }
    qsort(a,n,sizeof(TS),cmp);
    for(int i=0; i<n; i++){
        in(a[i]);
    }
}