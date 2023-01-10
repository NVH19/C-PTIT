#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    int l = strlen(s);
    for(int i=0; i<l; i++){
        if(s[i]>=65 && s[i]<=90)
            s[i] += 32;
    }
    char a[20][50];
    int cnt=0;
    char *token = strtok(s," \n");
    while(token != NULL){
        strcpy(a[cnt],token);
        cnt++;
        token = strtok(NULL, " \n");
    }
    int b[10000]={0};
    for(int i=0; i<cnt; i++){
        if(b[i]==0){
            int dem=1;
            for(int j=i+1; j<cnt;j++){
                if(strcmp(a[i],a[j])==0){
                    dem++;
                    b[j]=1;
                }
            }
            printf("%s %d",a[i],dem);
            printf("\n");
        }
    }
}