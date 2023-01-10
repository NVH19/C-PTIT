#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char c[100001];
    scanf("%s",c);
    int n=0, l = strlen(c);
    while(n<l){
        char tmp = c[n];
        for(int i=n; i<l; i++){
            if(c[i] > tmp)
                tmp = c[i];
        }
        int idx;
        for(int i=n; i<l; i++){
            if(c[i] == tmp){
                printf("%c",c[i]);
                idx = i;
            }
        }
        n = idx+1;
    }
}