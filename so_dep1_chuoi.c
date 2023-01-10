#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[501];
        scanf("%s",s);
        int l=strlen(s);
        int cnt=1;
        for(int i=0; i<l; i++){
            if((s[i]%2!=0 || s[i]!=s[l-i-1]) && i<l-i)
                cnt=0;
        }
        if(cnt==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}