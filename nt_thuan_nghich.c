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
int thuan_nghich(int n){
    int dem=0,a[20];
    while(n!=0){
        a[dem++] = n%10;
        n /= 10;
    }
    for(int i=0; i<dem; i++){
        if(a[i] != a[dem-i-1])
            return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int cnt=0;
        for(int i=a; i<=b; i++){
            if(nt(i)==1 && thuan_nghich(i)==1){
                printf("%d ",i);
                cnt++;
                if(cnt%10==0)
                    printf("\n\n");
            }
        }
        printf("\n");
    }
}