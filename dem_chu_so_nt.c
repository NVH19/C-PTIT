#include<stdio.h>
#include<string.h>
int check[10]={0};
int main(){
   char s[11];
   scanf("%s",s);
   int l = strlen(s);
   for(int i=0; i<l; i++){
        s[i]=s[i]-48;
        check[s[i]]++;
   }
   for(int i=0; i<l; i++){
       int cnt=0;
       if((s[i] == 2 || s[i]==3 ||s[i]==5 || s[i]==7) && check[s[i]]>cnt){
           printf("%d %d\n",s[i],check[s[i]]);
           check[s[i]]=0;
       }
   }
}