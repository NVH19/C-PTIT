#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            b[a[i]]=0;
        }
        for(int i=0;i<n; i++)
            b[a[i]]++;
        int dem=0;
        for(int i=0; i<n; i++){
            int cnt=0;
            if(b[a[i]]>cnt){
                c[dem] = a[i];
                cnt = b[a[i]];
                dem++;
            }
        }
        int max=-1e9;
        for(int i=0; i<dem; i++){
            if(b[c[i]]>max)
                max = b[c[i]];
        }
        for(int i=0; i<dem; i++){
            if(b[c[i]]==max){
                printf("%d ",c[i]);
                b[c[i]]=0;
            }
        }
        printf("\n");
    }
}