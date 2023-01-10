#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void tron(char s1[], char s2[],char s12[],int n){
    int j=0;
    for(int i=0;i<n; i++){
        s12[j++]=s2[i];
        s12[j++]=s1[i];
    }
    s12[j] = '\0';
}
void tach(char s1[], char s2[], char s12[],int n){
    int j=0;
    for(int i=0; i<n; i++){
        s1[i] = s12[j++];
    }
    for(int i=0; i<n; i++){
        s2[i] = s12[j++];
    }
}
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        char s1[n],s2[n],s12[2*n],t1[n],t2[n],tmp[2*n];
        scanf("%s%s%s",s1,s2,s12);
        strcpy(t1,s1);strcpy(t2,s2);
        int cnt=0;
        while(1){
            cnt++;
            tron(s1,s2,tmp,n);
            if(strcmp(s12,tmp)==0){
                printf("%d\n",cnt);
                break;
            }
            tach(s1,s2,tmp,n);
            if(strcmp(s1,t1)==0 && strcmp(s2,t2)==0){
                printf("-1\n");
                break;
            }
        }
    }
}