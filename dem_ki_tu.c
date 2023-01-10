#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    fflush(stdin);
    fgets(s,sizeof(s),stdin);
    int cnt=0,dem=0,idx=0;
    int l=strlen(s);
    for(int i=0; i<l; i++){
        int d = (int)s[i];
        if((65<= d && d <= 90) || (97 <=d && d <= 122))
            cnt++;
        else if(48 <= d && d <= 57)
            dem++;
        else
            idx++;
    }
    printf("%d %d %d",cnt,dem,idx-1);
}