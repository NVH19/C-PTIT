#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct SinhVien{
    int id;
    char ten[300];
    float toan,ly,hoa;
};
typedef struct SinhVien SV;
SV nhap(int ma){
    SV x;
    x.id = ma;
    getchar();
    gets(x.ten);
    scanf("%f%f%f",&x.toan,&x.ly,&x.hoa);
    return x;
}
void in(SV x){
    printf("%d %s %0.1f %0.1f %0.1f\n",x.id,x.ten,x.toan,x.ly,x.hoa);
}
float tong(SV x){
    return x.toan + x.ly +x.hoa;
}
int cmp(const void *a,const void *b){
    SV *x = (SV*)a;
    SV *y = (SV*)b;
    if(tong(*x) > tong(*y))
        return 1;
    else
        return -1;
}
int main(){
    SV a[1000];
    int n=0,dem=0, sua[200];
    while(1){
        int chon;
        scanf("%d",&chon);
        if(chon==1){
            int x;
            scanf("%d",&x);
            for(int i=0; i<x; i++){
                a[n] = nhap(n+1);
                n++;
            }
        }
        else if(chon==2){
            int ma;
            scanf("%d",&ma);
            sua[dem] = ma;
            dem++;
            // SV x = a[ma-1];
            a[ma-1] = nhap(ma);
        }
        else if(chon==3){
            printf("%d\n",n);
            for(int i=0; i<dem; i++)
                printf("%d ",sua[i]);
            printf("\n");
            qsort(a,n,sizeof(SV),cmp);
            for(int i=0; i<n; i++)
                in(a[i]);
            break;
        }
    }
}