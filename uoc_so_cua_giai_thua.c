#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p;
        scanf("%d%d",&n,&p);
        int cnt=0;
        for(int i=1; i<=n ;i++){
            int m =i;
            while(m%p==0){
                cnt++;
                m /= p;
            }
        }
        printf("%d\n",cnt);
    }
}