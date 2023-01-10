#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int cnt=0,c=0,l=0;
        char d = ' ';
        while(d != '\n'){
            int n;
            scanf("%d",&n);
            cnt++;
            if(n%2==0)
                c++;
            else
                l++;
            d = getchar();
        }
        if((cnt%2==0 && c>l) || (cnt%2!=0 && c<l))
            printf("YES\n");
        else
            printf("NO\n");
    }
}