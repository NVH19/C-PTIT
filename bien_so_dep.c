#include<stdio.h>
#include<string.h>
int tang(char s[]){
    for(int i=6; i<8;i++){
        if(s[i]>=s[i+1])
            return 0;
    }
    for(int i=10;i<11 ;i++){
        if(s[i]>=s[i+1])
            return 0;
    }
    return 1;
}
int deu(char s[]){
    if(s[6] != s[7] || s[6]!= s[8] || s[6] != s[10] || s[6]!= s[11])
        return 0;
    return 1;
}
int deu2(char s[]){
    if(s[6] != s[7] || s[6]!=s[8] || s[10]!=s[11])
        return 0;
    return 1;
}
int locphat(char s[]){
    for(int i=6; i<=8; i++){
        if(s[i]-'0'!=6 && s[i]-'0'!=8)
            return 0;
    }
    for(int i=10; i<=11;i++){
        if(s[i]-'0'!=6 && s[i]-'0'!=8)
            return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[15];
        gets(s);
        if(tang(s)==1 || deu(s)==1 || deu2(s)==1 || locphat(s)==1)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
}