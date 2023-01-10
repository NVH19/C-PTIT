// #include<stdio.h>
// #include<math.h>
// int nt(int n){
//     if(n<2)
//         return 0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0)
//             return 0;
//     }
//     return 1;
// }
// int ptnt(int n){
//     int s1=0;
//     for(int i=2; i<=sqrt(n); i++){
//         while(n%i==0){
//             s1 += i;
//             n /= i;
//         }
//     }
//     if(nt(n))
//         s1 += n;
//     return s1;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     long long s=0;
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//         if(nt(a[i]))
//             s += a[i];
//         else
//             s += ptnt(a[i]);
//     }
//     printf("%lld",s);
// }
#include<stdio.h>
#include<math.h>
int A[2000006] = {};
int main() { 
    int n, max = -99999; 
    long long tong = 0; 
    scanf("%d",&n);
    int a[n]; 
    for(int i=0;i<=n - 1;i++) { 
        scanf("%d",&a[i]); 
        if(a[i] > max) 
            max = a[i]; 
    } 
    A[0] = A[1] = 1;
    for(int i=2;i<=sqrt(max);i++) 
        if(!A[i]) 
        for(int j = i * i; j <= max; j += i) 
            if(!A[j]) 
                A[j] = i; 
    for(int i=2;i<=max;i++) 
        if(!A[i]) 
            A[i] = i; 
    for(int i=0;i<=n-1;i++) { 
        int x = a[i]; 
        while(x != 1) { 
            tong += A[x]; x /= A[x]; 
        } 
    } 
    printf("%lld",tong); return 0; 
}