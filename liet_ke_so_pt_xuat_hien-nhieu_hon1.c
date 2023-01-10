#include<stdio.h>
int b[10001]={0};
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    int cnt=1,dem=0,c[n];
    for(int i=0; i<n; i++){
        if(b[a[i]]>cnt){
            c[dem]=a[i];
            dem++;
            b[a[i]]=1;
        }
    }
    printf("%d\n",dem);
    for(int i=0; i<dem; i++){
        printf("%d ",c[i]);
    }
}