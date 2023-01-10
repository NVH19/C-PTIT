#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int cnt=0;
        qsort(a,n,sizeof(int),compare);
        int res = 2e9+1000;
        for(int i =0; i<n-1; i++){
            if(a[i+1]-a[i]<res){
                res = a[i+1]-a[i];
                cnt=1;
            }
            else if(a[i+1]-a[i]==res)
                cnt++;
        }
        printf("%d %d\n",res, cnt);
    }
}