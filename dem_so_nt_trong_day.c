#include<stdio.h>
int b[10000]={0};
int main(){
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        int check[10000];
        for(int i=2; i<10000; i++)
        check[i]=1;
        for(int i=2; i<10000; i++){
            if(check[i]){
                for(int j=2*i; j<10000; j+=i)
                    check[j]=0;
            }
        }
        printf("Test %d:\n",k);
        int cnt=0;
        for(int i=0; i<10000; i++){
            if(b[i]>cnt && check[i]==1){
                printf("%d xuat hien %d lan\n", i,b[i]);
                b[i]=0;
            }
        }
    }
}