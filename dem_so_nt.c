#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int tong_chu_so(int n){
    int r,dem=0,tmp=0;
    while(n!=0){
        r = n%10;
        if(nt(r))
            dem++;
        n /= 10;
        tmp++;
    }
    if(dem==tmp)
        return 1;
    else
        return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int check[b+1];
        for(int i=2; i<=b ;i++)
            check[i] = 1;
        for(int i=2; i<=b; i++){
            if(check[i]){
                for(int j=2*i; j<=b; j+=i)
                    check[j]=0;
            }
        }
        int cnt=0;
        for(int i=2; i<=b; i++){
            // int d = tong_chu_so(i);
            // printf("%d ",d);
            if(check[i]==1 && i>=a && tong_chu_so(i)==1){
                cnt++;
                // printf("%d ",cnt);
                // printf("%d ",i);
            }
        }
        printf("%d\n",cnt);
    }
}