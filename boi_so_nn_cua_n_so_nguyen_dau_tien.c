#include<stdio.h>
#include<math.h>
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[100] = {0};
        long long sum = 1;
        for(int i=1; i<=n; i++){
            int tmp = i;
            for(int j=2; j<=tmp; j++){
                int cnt = 0;
                while(tmp %j ==0){
                    tmp /= j;
                    cnt++;
                }
                a[j] = max(a[j],cnt);
            }
        }
        for(int i=1; i<=n; i++){
            if(a[i]!=0)
                sum *= pow(i,a[i]);
        }
        printf("%lld\n",sum);
    }
}