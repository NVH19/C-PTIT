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
        if(n > m){
            int tp = n;
            n = m;
            m = tp; 
        }
        int a[100]={0};
        long long sum=1;
        for(int i=n; i<=m; i++){
            int tmp = i;
            for(int j=2; j<=tmp; j++){
                int cnt = 0;
                while(tmp % j==0){
                    tmp /= j;
                    cnt++;
                }
                a[j] = max(a[j],cnt); // luu chi so mu
            }
        }
        for(int i=1; i<=m; i++){
            if(a[i]!=0)
                sum *= pow(i,a[i]);
        }
        printf("%lld\n",sum);
    }
}