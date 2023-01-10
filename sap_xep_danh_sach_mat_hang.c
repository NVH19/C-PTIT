#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct mathang{
    char tenmathang[1000];
    char nhomhang[1000];
    double giamua,giaban;
    int id;
};
typedef struct mathang MH;
void nhap(MH *a){
    getchar();
    gets(a->tenmathang);
    gets(a->nhomhang);
    scanf("%lf %lf",&a->giamua,&a->giaban);
}
void in(MH a){
    printf("%d %s %s %0.2lf\n",a.id,a.tenmathang,a.nhomhang,a.giaban-a.giamua);
}
int cmp(const void *a, const void *b){
    MH *x = (MH*)a;
    MH *y = (MH*)b;
    if((x->giaban - x->giamua) < (y->giaban - y->giamua))
        return 1;
    else   
        return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    MH a[n];
    for(int i=0; i<n; i++){
        a[i].id = i+1;
        nhap(&a[i]);
    }
    qsort(a,n,sizeof(MH),cmp);
    // for(int i=1; i<=n; i++){
    //     a[i].loinhuan = a[i].giaban - a[i].giamua;
    // }
    // }
    // qsort(a,n,sizeof(MH),cmp);
    for(int i=0; i<n; i++)
        in(a[i]);
    // for(int i=0; i<cnt; i++){
    //     int ok=0;
    //     for(int j=i; j<=n; j++){
    //         if(a[j].giaban - a[j].giamua == b[i]){
    //             printf("%d ",j);
    //             printf("%s %s %lf\n",a[j].tenmathang,a[j].nhomhang,b[i]);
    //             ok=1;
    //         }
    //         if(ok)
    //             break;
    //     }
    // }
}