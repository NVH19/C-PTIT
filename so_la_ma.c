#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[100];
        scanf("%s",s);
        int a[90];
        int b[100];
        a[73] = 1; a[86] = 5; a[88] = 10; a[76] = 50; a[67] = 100; a[68] = 500; a[77] = 1000;
        int l = strlen(s);
        for(int i=0; i<l; i++){
            b[i] = (int)s[i];
        }
        int sum = a[b[l-1]];
        for(int i=l-1; i>0; i--){
            int x = b[i], y = b[i-1];
            if(a[x]>a[y])
                sum -= a[y];
            else
                sum += a[y];
        }
        printf("%d\n",sum);
    }
}