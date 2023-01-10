#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int k=0; k<t; k++){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int cnt=0,dem=0,res=1;
        for(int i=0; i<n;i++){
            if(a[i]>a[i-1])
                dem++;
            else   
                dem=1;
            if(dem>res){
                res = dem;
                b[0]=i-res+1;
                cnt=1;
            }
            else if(dem==res){
                b[cnt]=i-res+1;
                cnt++;
            }
        }
        printf("Test %d:\n",k+1);
        printf("%d\n",res);
        for(int i=0; i<cnt; i++){
            for(int j=0; j<res;j++){
                printf("%d ",a[b[i]+j]);
            }
            printf("\n");
        }
    }
}