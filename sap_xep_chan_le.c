#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num1- num2;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c[n],l[n];
    int idx=0, dem=0;
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            c[idx]=a[i];
            idx++;
        }
        else{
            l[dem]=a[i];
            dem++;
        }
    }
    qsort(c,idx,sizeof(int),compare);
    qsort(l,dem,sizeof(int),compare);
    for(int i=0; i<idx;i++)
        printf("%d ",c[i]);
    for(int i=0; i<dem; i++)
        printf("%d ",l[i]);
}