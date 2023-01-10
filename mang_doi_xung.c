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
        int st=0,end=n-1,cnt=0;
        for(int i=0; i<n/2; i++){
            if(a[i]!=a[n-1-i])
                cnt++;
        } 
        if(cnt==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}