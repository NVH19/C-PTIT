#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[501];
        scanf("%s",s);
        int l=strlen(s),sum=0,cnt=1;
        for(int i=0; i<l; i++){
            sum += s[i]-48;
            if(s[i]!=s[l-i-1] && i<l-i)
                cnt=0;
        }
        if(cnt==1 && s[0]=='8' && s[l-1]=='8' && sum%10==0)
            printf("YES\n");
        else   
            printf("NO\n");
    }
}