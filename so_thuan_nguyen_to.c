#include<stdio.h>
#include<math.h>
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int sang(int n){
    if(n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19)
        return 1;
    if(n==23 || n==29 || n==31 || n==37 || n==41 || n==43 || n==47 || n==53) 
        return 1;
    if(n==59 || n==61 || n==67 || n==71 || n==73 || n==79 || n==83 || n==89 || n==97)
        return 1;
    return 0;
}
int check(int m){
    int s=0;
    while(m!=0){
        int d = m%10;
        if(sang(d)==0)
            return 0;
        s += d;
        m /= 10;
    }
    if(sang(s)==0)
        return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d%d",&l,&r);
        int prime[r-l+1];
        for(int i=0; i<=r-l+1;i++)
            prime[i]=1;
        for(int i=2; i<=sqrt(r); i++){
            for(int j=max(i*i,((l+i-1)/i)*i); j<=r; j+=i)
                prime[j-l]=0;
        }
        int a[10000],cnt=0;
        int idx=0;
        for(int i=max(l,2); i<=r; i++){
            if(prime[i-l]){
                if(check(i))
                    idx++;
            }
        }
        printf("%d\n",idx);
    }
}