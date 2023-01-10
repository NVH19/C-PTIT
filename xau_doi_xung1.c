#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[25];
        scanf("%s",s);
        int k = strlen(s);
        int l=0, r =k/2-1;
        int cnt=0;
        for(int i=0; i<=r;i++){
            if(s[i]!=s[k-i-1])
                cnt++;
        }
        if(cnt>1 || (cnt==0 && k%2==0))
            printf("NO\n");
        else
            printf("YES\n");
    }
}