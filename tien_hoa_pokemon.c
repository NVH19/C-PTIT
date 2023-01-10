#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Pokemon{
    char ten[100];
    int can;
    int co;
};
typedef struct Pokemon PK;
void nhap(PK *x){
    getchar();
    gets(x->ten);
    scanf("%d%d",&x->can,&x->co);
}
int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
    int n;
    scanf("%d",&n);
    PK a[n];
    int b[n],cnt=0;
    for(int i=0; i<n; i++){
        nhap(&a[i]);
    }
    for(int i=0; i<n; i++){
        b[cnt] = a[i].co / (a[i].can-2);
        cnt++;
    }
    qsort(b,n,sizeof(int),cmp);
    int sum=0,max;
    for(int i=0; i<cnt; i++)
        sum += b[i];
    max = b[cnt-1];
    printf("%d\n",sum);
    for(int i=0; i<n; i++){
        if(a[i].co / (a[i].can-2) == max){
            printf("%s",a[i].ten);
            break;
        }
    }
}