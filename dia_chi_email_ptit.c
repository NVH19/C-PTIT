#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    int l=strlen(s);
    for(int i=0; i<l; i++){
        if(s[i]>=65 && s[i]<=90)
            s[i] += 32;
    }
    char a[20][55];
    int n=0;
    char *token = strtok(s," \n");
    while(token!=NULL){
        strcpy(a[n],token);
        n++;
        token = strtok(NULL, " \n");
    }
    for(int i=0; i<n-1; i++){
        printf("%c",a[i][0]);
    }
    printf("%s@ptit.edu.vn",a[n-1]);
}