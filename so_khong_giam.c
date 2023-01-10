#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int s[20],a=0;
        while(n!=0){
            s[a] = n%10;
            n /= 10;
            a++;
        }
        int cnt=0;
        for(int i=0; i<a-1; i++){
            if(s[i] < s[i+1])
                cnt++;
        }
        if(cnt>0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}