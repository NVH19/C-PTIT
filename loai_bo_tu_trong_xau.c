#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[201];
    char c[201];
    gets(s);
    scanf("%s",c);
    char a[100][200];
    int n=0;
    char *tu = strtok(s , " ");
    while(tu != NULL){
        if(strcmp(tu,c)!=0){
            strcpy(a[n],tu);
            n++;
        }
        tu = strtok(NULL, " ");
    }
    for(int i=0; i<n; i++){
        printf("%s",a[i]);
        if(i!=n-1)
            printf(" ");
    }
}