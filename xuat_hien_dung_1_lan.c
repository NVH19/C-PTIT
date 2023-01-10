#include<stdio.h>
int b[10000]={0};
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
        b[a[i]]++;
    int cnt=1,dem=0;
    for(int i=0; i<n; i++){
        if(b[a[i]]==cnt){
            dem++;
        }
    }
    printf("%d\n",dem);
    for(int i=0; i<n; i++){
        if(b[a[i]]==cnt){
            printf("%d ",a[i]);
        }
    }
}