#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int c[n],cnt=0;
    int le[n],dem=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            c[cnt]=a[i];
            cnt++;
        }
        else{
            le[dem]=a[i];
            dem++;
        }
    }
    for(int i=0; i<cnt; i++)
        printf("%d ",c[i]);
    printf("\n");
    for(int i=0; i<dem; i++)
        printf("%d ", le[i]);
}