#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int cnt=0;
    for(int i=2; i<=n ;i++){
        int a=i;
        while(a%2==0){
            cnt++;
            a /= 2;
        }
    }
    if(n>=2 && k==1)
        printf("Yes");
    else{
        if(cnt !=0 && cnt>=k)
            printf("Yes");
        else
            printf("No");
    }
}