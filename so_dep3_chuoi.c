#include<stdio.h>
#include<string.h>
int b[11];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int check[10];
        for(int i=2; i<10;i++){
            if(i==2 || i==3 || i==5 || i==7)
                check[i]=1;
            else
                check[i]=0;
        }
        char s[501];
        scanf("%s",s);
        int l=strlen(s),cnt=1;
        for(int i=0; i<l; i++){
            if((s[i]!=s[l-i-1] || check[s[i]-48]==0) && i<l-i)
                cnt=0;
        }
        if(cnt==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}