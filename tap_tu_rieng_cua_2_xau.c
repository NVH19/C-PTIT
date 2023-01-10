#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int cmp(const void *a,const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x,y);
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char c1[205], c2[205], a[100][100], b[100][100];
        gets(c1);
        gets(c2);
        int n=0,m=0;
        char *token = strtok(c1, " \n");
        while(token != NULL){
            strcpy(a[n], token);
            n++;
            token = strtok(NULL, " \n");
        }
        token = strtok(c2, " \n");
        while(token != NULL){
            strcpy(b[m], token);
            m++;
            token = strtok(NULL, " \n");
        }
        qsort(a,n,sizeof(a[0]),cmp);
        for(int i=0; i<n; i++){
            while(strcmp(a[i],a[i+1])==0)
                i++;
            int check = 1;
            for(int j=0; j<m; j++){
                if(strcmp(a[i],b[j])==0){
                    check = 0;
                    break;
                }
            }
            if(check==1)
                printf("%s ",a[i]);
        }
        printf("\n");
    }
}