#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[1005];
        scanf("%s",s);
        int l = strlen(s);
        int cnt=0,idx=0;
        char a[l];
        int b[10]={0};
        for(int i=0; i<l;i++){
            if(s[0]==48 || s[i]<48 || s[i]>57)
                cnt=1;
            else
                b[s[i]-'0']++;
        }
        for(int i=0;i<l; i++){
            if(b[s[i]-'0']>0){
                idx++;
                b[s[i]-'0']=0;
            }
        }
        if(cnt==1)
            printf("INVALID\n");
        else if(idx==10)
            printf("YES\n");
        else
            printf("NO\n");
    }
}