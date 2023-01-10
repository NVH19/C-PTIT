#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void chuanhoa(char a[]){
    a[0] = toupper(a[0]);
    for(int i=1; i<strlen(a); i++)
        a[i] = tolower(a[i]);
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[100];
        gets(s);
        char a[20][50];
        int cnt=0;
        char *token = strtok(s , " \n");
        while(token != NULL){
            strcpy(a[cnt++],token);
            token = strtok(NULL, " \n");
        }   
        for(int i=0; i<cnt; i++){
            chuanhoa(a[i]);
            printf("%s",a[i]);
            if(i!=cnt-1)
                printf(" ",a[i]);
        }
        printf("\n");
    }
}