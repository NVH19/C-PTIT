#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
void sort(ll a[],int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j])
                min = j;
        }
        int tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
}
int check(ll a[],int n){
    for(int i=n-1; i>=2; i--){
        int l=0, r= i-1;
        while(l<r){
            if(a[l]+a[r]==a[i])
                return 1;
            else if(a[l]+a[r]<a[i]) l++;
            else
                r--;
        }
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        ll a[n];
        for(int i=0; i<n; i++){
            int x;
            scanf("%d",&x);
            a[i] = 1ll*x*x;
        }
        sort(a,n);
        if(check(a,n))
            printf("YES\n");
        else  
            printf("NO\n");
    }
}