#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[40]={0};
        long long sum=1;
        for(int i=n; i<=m; i++){
            int tmp = i;
            for(int j=2; j<=tmp; j++){
                int cnt = 0;
                while(tmp % j==0){
                    tmp /= j;
                    cnt++;
                }
                a[j] = max(a[j],cnt); 
            }
        }
        for(int i=0; i<40; i++){
            sum *= pow(i,a[i]);
        }
        printf("%lld\n",sum);
    }
}