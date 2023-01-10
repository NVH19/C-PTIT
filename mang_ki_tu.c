#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char s[]){
    int a1=0,a2=0,b1=0,b2=0,c2=0,c1=0,d=0,e=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='(') a1++;
        else if(s[i]==')') a2++;
        else if(s[i]=='[') b1++;
        else if(s[i]==']') b2++;
        else if(s[i]=='{') c1++;
        else if(s[i]=='}') c2++;
        else if((int)s[i]==39) d++;
        else e++;
    }
    if(a1!=a2 || b1!=b2 || c1!=c2 || d%2!=0 || e%2!=0)
        return 0;
    return 1;
}
int main(){
    char s[1000];
    gets(s);
    int ok=1;
    if(check(s))
        printf("1");
    else    
        printf("0");
}