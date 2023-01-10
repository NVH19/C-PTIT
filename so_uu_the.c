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
        int chan=0,le=0,cnt=1;
        for(int i=0; i<l;i++){
            if(s[0]==48 || s[i]<48 || s[i]>57)
                cnt=0;
            else if(s[i]%2==0)
                chan++;
            else    
                le++;
        }
        if(cnt==0)
            printf("INVALID\n");
        else if((l%2==0 && chan>le) || (l%2!=0 && le>chan))
            printf("YES\n");
        else
            printf("NO\n");        
    }
}