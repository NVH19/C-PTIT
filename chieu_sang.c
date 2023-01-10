// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,m,k;
//     scanf("%d%d%d",&n,&m,&k);
//     int a[m];
//     for(int i=1; i<=m; i++)
//         scanf("%d",&a[i]);
//     int cnt=0;
//     double b;
//     for(int i=1; i<m;i++){
//         int tmp1 = a[i]+k;
//         int tmp2 = a[i+1]-k;
//         double a = (double)(tmp2-tmp1)/(2*k);
//         // printf("%f\n",a);
//         b = ceil(a);
//         cnt = cnt + b;
//     }
//     double c = a[1]-k,d=a[m]+k;
//     double e = (double)(c-1)/(2*k),f = (double)(n+1-d)/(2*k);
//     // printf("%f %f\n",e,f);
//     double h = ceil(e),l = ceil(f);
//     // printf("%f %f\n",h,l);
//     if(e>0)
//         cnt+=h;
//     if(f>0)
//         cnt += l;
//     printf("%d",cnt);
// }
#include<stdio.h>
#include<math.h>
int min(int a, int b){
    return a > b ? b : a;
}
int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[10001];
    for(int i=1; i<=m; i++){
        int x;
        scanf("%d",&x);
        int first, end;
        if(x-k < 1)
            first = 1;
        else    
            first = x-k;
        if(x+k > n)
            end = n;
        else    
            end = x + k;
        for(int j=first ; j<end ;j++)
            a[j] = 1;
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(!a[i]){
            ans++;
            for(int j=i; j<=min(i +2*k,n); j++)
                a[j] = 1;
        }
    }
    printf("%d",ans);
}