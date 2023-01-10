#include<stdio.h>
int sogiam(int n){
    int idx=1;
    if(n<10)
        return 0;
    while(n!=0){
        int cnt=n/10;
        int r = n%10;
        if(r >= cnt%10 && n>10)
            idx = 0;
        n /= 10;
    }
    return idx;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,cnt=0;
        scanf("%d%d",&a,&b);
        for(int i=a; i<=b ; i++){
            if(sogiam(i)==1){
                // printf("%d ",i);
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(sogiam(n))
//         printf("YES");
//     else    
//         printf("NO");
// }
