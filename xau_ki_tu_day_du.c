#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int max(int a,int b){
    return a > b ? a : b;
}
int main(){
    char s[55];
    scanf("%s",s);
    int l = strlen(s);
    int a[l];
    int res=0;
    for(int i=0; i<l; i++){
        a[i]=1;
        for(int j=0; j<i; j++){
            if((int)s[i] > (int)s[j] && a[i] < a[j]+1){
                a[i] = a[j] +1;
            }
        }
        res = max(res,a[i]);
    }
    printf("%d",26-res);
}