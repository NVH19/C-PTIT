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
        printf("Test %d:\n",k);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(b[a[i]]>cnt){
                printf("%d xuat hien %d lan\n", a[i],b[a[i]]);
                b[a[i]]=0;
            }
        }
    }
}