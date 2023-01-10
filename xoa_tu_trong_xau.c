#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int min(int c,int d){
    if(c>d)
        return d;
    return c;
}
int cmp(char a[],char b[]){
    int l1 = strlen(a);
    int l2 = strlen(b);
    if(l1 != l2)
        return 0;
    for(int i=0; i<l1; i++){
        if(tolower(a[i]) != tolower(b[i]))
            return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    for(int k=1; k<=t; k++){
        char s1[205],s2[25];
        gets(s1);
        gets(s2);
        char *token = strtok(s1, " \n");
        printf("Test %d: ",k);
        while(token != NULL){
            if(!cmp(token,s2))
            printf("%s ",token);
            token = strtok(NULL, " \n");
        }
        printf("\n");
    }
}
