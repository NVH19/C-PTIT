#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int s[10]={1,2,5,10,20,50,100,200,500,1000};
        int n;
        scanf("%d",&n);
        int dem=0;
        for(int i=9; i>=0 ;i--){
            while(n-s[i]>=0){
                dem++;
                n -= s[i];
            }
        }
        printf("%d\n",dem);
    }
}