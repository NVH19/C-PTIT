#include<stdio.h>
#include<string.h>
int dem(char s[201]){
    char *tu = strtok(s," \n");
    int cnt=0;
    while(tu != NULL){
        cnt++;
        tu = strtok(NULL , " \n");
    }
    return cnt;
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[201];
        gets(s);
        printf("%d\n",dem(s));
    }
}