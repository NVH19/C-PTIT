#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int a[100001],cnt=0;
void solve(char c[]){
    for(int i=0; i<strlen(c);i++){
        if(isdigit(c[i])){
            int tmp=0;
            while(c[i]!='*'){
                tmp = tmp*10 + c[i]-'0';
                i++;
            }
            i+=3;
            int mu=0;
            while(isdigit(c[i])){
                mu = mu*10 + c[i]-'0';
                i++;
            }
            a[mu] += tmp;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0; i<t; i++){
        char s1[100001],s2[100001];
        gets(s1);
        gets(s2);
        memset(a,0,sizeof(a));
        solve(s1);
        solve(s2);
        int cnt=0;
        for(int i=100001; i>=0; i--){
            if(a[i])
                cnt++;
        }
        for(int i=100001; i>=0; i--){
            if(a[i]!=0){
                printf("%d*x^%d",a[i],i);
                cnt--;
                if(cnt!=0)
                    printf(" + ");
            }
        }
        printf("\n");
    }
}