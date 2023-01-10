#include<stdio.h>
int b[10000]={0};
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(b[a[i]]>cnt){
            printf("%d %d\n",a[i],b[a[i]]);
            b[a[i]]=0;
        }
    }
}