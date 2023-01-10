#include<stdio.h>
#include<string.h>
int main(){
    char s[100005];
    gets(s);
    int l=strlen(s);
    printf("%d",l-1);
    return 0;
}