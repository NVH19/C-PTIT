#include<stdio.h>
#include<string.h>
#include<ctype.h>
int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
void reverse(int a[],int n){
    int l=0, r=n-1;
    while(l<r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
}
void minus(char a[],char b[]){
    int l1 = strlen(a), l2 = strlen(b);
    int d = max(l1,l2);
    int c[d],e[d],f[d];
    for(int i=0; i<l1; i++)
        c[i] = a[i] - '0';
    for(int i=0; i<l2; i++)
        e[i] = b[i] - '0';
    reverse(e,l2);
    // for(int i=0; i<l2; i++)
    //     printf("%d",e[i]);
    // printf("\n");
    for(int i=l2; i<l1; i++)
        e[i]=0;
    reverse(e,d);
    // for(int i=0; i<d; i++)
    //     printf("%d",e[i]);
    // printf("\n");
    int res,nho=0,kq;
    for(int i=d-1; i>=0; i--){
        res = c[i] - (e[i] + nho);
        if(res<0){
            res += 10;
            nho = 1;
        }
        f[i] = res;
    }
    // reverse(f,d);
    int ok=0;
    for(int i=0; i<d; i++){
        if(ok==0 && f[i]!=0)
            ok=1;
        if(ok)
            printf("%d",f[i]);
    }
    if(ok==0)
        printf("0");
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s1[1005],s2[1005];
        scanf("%s%s",s1,s2);
        int l1 = strlen(s1), l2 = strlen(s2);
        if(l1>l2 || (l1==l2 && strcmp(s1,s2)>0))
            minus(s1,s2);
        else
            minus(s2,s1);
        printf("\n");
    }
}