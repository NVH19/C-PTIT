#include<stdio.h> 
#include<string.h> 
int main(){ 
    char s[100]; 
    gets(s); 
    char h[100]; 
    gets(h); 
    char a[100][100]; 
    char b[100][100]; 
    char *p=strtok(s," "); 
    int i=0,j=0; 
    while(p!=NULL) {
        strcpy(a[i++],p);
        p=strtok(NULL," ");
    } 
    char *q=strtok(h," ");
    while(q!=NULL) { 
        strcpy(b[j++],q); 
        q=strtok(NULL," ");
    } 
    for(int m;m<i;m++){ 
        for(int n=m+1;n<i;n++){
            if(strcmp(a[m],a[n])>0){ 
                char bol[100] = {}; 
                strcpy(bol,a[m]); 
                strcpy(a[m],a[n]); 
                strcpy(a[n],bol); 
            } 
        } 
    }
    int c[100]={};
    for(int size_1 = 0;size_1 < i;size_1++){
        int k = 0; 
        for(int size_2 = 0;size_2 <= size_1-1;size_2++){ 
            if(strcmp(a[size_1],a[size_2])==0){ 
                k = 1; 
                break;
            } 
        } 
        if(k==0){ 
            for(int z=0;z<j;z++) { 
                if(strcmp(a[size_1],b[z])==0)
                    c[size_1]=1; 
            } 
            if(c[size_1]==0) {
                printf("%s ",a[size_1]);
            } 
        } 
     }
}