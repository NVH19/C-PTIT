#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n) ;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    long long n;
    scanf("%lld",&n);
    int r,cnt=0;
    int a[20];
    while(n!=0){
        r = n%10;
        if(nt(r)){
            a[cnt]=r;
            cnt++;
        }
        n /= 10;
    }
    int st=0,end=cnt-1;
    for(int i=0; i<cnt ;i++){
        while(st < end){
            int tmp=a[st];
            a[st]= a[end];
            a[end] = tmp;
            st++;
            end--;
        }
    }
    int b[20],idx=0;
    for(int i=0; i<cnt; i++)
        b[a[i]]=0;
    for(int i=0; i<cnt; i++){
        b[a[i]]++ ;
    }
    for(int i=1; i<cnt; i++){
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                for(int k=i; k<cnt ;k++){
                    a[k] = a[k+1];
                }
                    cnt--;
                    i--;
            }
        }
    }
    for(int i=0; i<cnt; i++){
            printf("%d %d", a[i], b[a[i]]);
            printf("\n");
    }
}