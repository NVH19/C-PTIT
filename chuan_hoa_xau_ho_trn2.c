#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoa1(char a[]){
    a[0] = toupper(a[0]);
    for(int i=1; i<strlen(a); i++)
        a[i] = tolower(a[i]);
}
void chuanhoa2(char c[]){
    for(int i=0; i<strlen(c); i++)
        c[i] = toupper(c[i]);
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[100];
        gets(s);
        char a[50][50];
        int cnt=0;
        char *token = strtok(s, " \n");
        while(token != NULL){
            strcpy(a[cnt],token);
            cnt++;
            token = strtok(NULL , " \n");
        }
        for(int i=1; i<cnt; i++){
            chuanhoa1(a[i]);
            chuanhoa2(a[0]);
            printf("%s",a[i]);
            if(i != cnt-1)
                printf(" ");
        }
        printf(", %s",a[0]);
        printf("\n");
    }
}