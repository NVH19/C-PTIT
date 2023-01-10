#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char s[105];
    gets(s);
    char *token = strtok(s, " \n");
    char a[50][50];
    int n=0;
    while(token != NULL){
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " \n");
    }
    for(int i=0; i<n; i++){
        int ok = 1;
        for(int j=0; j<i; j++){
            if(strcmp(a[i],a[j])==0){
                ok=0;
                break;
            }
        }
        if(ok==1)
            printf("%s ",a[i]);
    }
}