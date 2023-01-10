#include<stdio.h>
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
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    cnt=1;
                    printf("%d\n",a[i]);
                }
            }
            if(cnt==1)
                break;
        }
        if(cnt==0)
            printf("NO\n");
    }
}