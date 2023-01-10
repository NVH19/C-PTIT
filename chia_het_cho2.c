#include<stdio.h>
#include<math.h>
int cp(int n){
    int a=sqrt(n);
    if(a*a==n)
        return 1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int cnt=0,tmp=0;
        int a[1000];
        for(int i=1; i<= sqrt(n); i++){
            if(n%i==0){
                a[tmp++]=i;
                a[tmp++]=n/i;
            }
        }
        for(int i=0; i<tmp; i++){
            if(a[i]%2==0)
                cnt++;
        }
        if(n%2==0 && cp(n)==1)
            printf("%d\n",cnt-1);
        else
            printf("%d\n",cnt);
    }
}