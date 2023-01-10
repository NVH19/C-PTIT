#include<stdio.h>
#include<stdlib.h>
int compare(const void *n,const void *m){
    int num1 = *(int*)n;
    int num2 = *(int*)m;
    return num1 - num2;
}
int compare1(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num2-num1;
}
int main(){
    int n,t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<n; i++)
            scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),compare);
        qsort(b,n,sizeof(int),compare1);
        int dem=0, idx=0,cnt=0;
            int c[2*n];
            for(int j=0; j<2*n ;j++){
                if(j%2==0){
                    c[dem] = a[idx];
                    dem++;
                    idx++;
                }
                else{
                    c[dem] = b[cnt];
                    dem++;
                    cnt++;
                }
            }
        printf("Test %d:\n",i+1);
        for(int j=0; j<2*n; j++)
            printf("%d ",c[j]);
        printf("\n");
    }
}